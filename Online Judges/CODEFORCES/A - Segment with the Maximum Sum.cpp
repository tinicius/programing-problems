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

#define MAX 100000 + 10

ll v[MAX];

ll t[4 * MAX];

ll pre[4 * MAX];
ll suf[4 * MAX];
ll sum[4 * MAX];

void build(ll i, ll l, ll r) {
  if (l == r) {
    t[i] = max(v[l], (ll)0);
    pre[i] = max(v[l], (ll)0);
    suf[i] = max(v[l], (ll)0);
    sum[i] = v[l];
  } else {
    ll m = (l + r) / 2;
    build(2 * i, l, m);
    build(2 * i + 1, m + 1, r);

    pre[i] = max(pre[2 * i], sum[2 * i] + pre[2 * i + 1]);
    suf[i] = max(suf[2 * i + 1], sum[2 * i + 1] + suf[2 * i]);
    sum[i] = sum[2 * i] + sum[2 * i + 1];

    t[i] = max({t[2 * i], t[2 * i + 1], suf[2 * i] + pre[2 * i + 1]});
  }
};

void update(ll i, ll l, ll r, ll p, ll x) {
  if (p < l || p > r) return;
  if (l == r) {
    t[i] = max(x, (ll)0);
    pre[i] = max(x, (ll)0);
    suf[i] = max(x, (ll)0);
    sum[i] = x;
  } else {
    ll m = (l + r) / 2;

    update(2 * i, l, m, p, x);
    update(2 * i + 1, m + 1, r, p, x);

    pre[i] = max(pre[2 * i], sum[2 * i] + pre[2 * i + 1]);
    suf[i] = max(suf[2 * i + 1], sum[2 * i + 1] + suf[2 * i]);
    sum[i] = sum[2 * i] + sum[2 * i + 1];

    t[i] = max({t[2 * i], t[2 * i + 1], suf[2 * i] + pre[2 * i + 1]});
  }
};

int main() {
  _;

  ll n, m;
  cin >> n >> m;

  for (ll i = 0; i < n; i++) cin >> v[i];

  build(1, 0, n - 1);

  // for (ll i = 1; i <= 9; i++) {
  //   cout << i << ": " << t[i] << " " << pre[i] << " " << suf[i] << " " <<
  //   sum[i]
  //        << endl;
  // }

  cout << t[1] << endl;

  while (m--) {
    ll p, x;
    cin >> p >> x;

    update(1, 0, n - 1, p, x);

    cout << t[1] << endl;
  }

  return 0;
}