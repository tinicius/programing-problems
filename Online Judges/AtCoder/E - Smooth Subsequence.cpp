#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#define MAX (ll)5 * 1e5 + 10

ll n, d;
vector<ll> a(MAX);

vector<ll> dp(MAX);

vector<ll> t(4 * MAX, 0);

ll query(ll v, ll tl, ll tr, ll l, ll r) {
  if (l > r) return 0;
  if (l == tl && r == tr) {
    return t[v];
  }
  ll tm = (tl + tr) / 2;
  return max(query(v * 2, tl, tm, l, min(r, tm)),
             query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
}

void update(ll v, ll tl, ll tr, ll pos, ll new_val) {
  if (tl == tr) {
    t[v] = new_val;
  } else {
    ll tm = (tl + tr) / 2;
    if (pos <= tm)
      update(v * 2, tl, tm, pos, new_val);
    else
      update(v * 2 + 1, tm + 1, tr, pos, new_val);
    t[v] = max(t[v * 2], t[v * 2 + 1]);
  }
}

ll lis() {
  for (ll i = 0; i < n; i++) {
    ll l = max((ll)0, a[i] - d);
    ll r = min((ll)500010, a[i] + d);

    dp[i] = query(1, 0, 500010, l, r);

    update(1, 0, 500010, a[i], dp[i] + 1);
  }

  return t[1];
}

int main() {
  _;

  cin >> n >> d;
  for (ll i = 0; i < n; i++) cin >> a[i];

  cout << lis() << endl;

  return 0;
}