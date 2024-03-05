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

unordered_map<ll, ll> m;
unordered_map<ll, ll> s;

ll solve(ll o_s, ll n_s, ll& ans) {
  if (m[n_s] == 0) {
    // Número novo

    if (m[o_s] == 1) {
      // dbg(1);
      return ans;
    } else {
      ans++;
      // dbg(2);
      return ans;
    }
  } else {
    if (m[o_s] == n_s || m[o_s] > 1) {
      // dbg(3);
      return ans;
    }

    if (m[o_s] == 1) {
      ans--;
      // dbg(4);
      return ans;
    }
  }

  return ans;
}

int main() {
  _;

  ll n, t;
  cin >> n >> t;

  ll ans = 1;

  m[0] = n;
  for (int i = 1; i <= n; i++) s[i] = 0;

  for (ll i = 0; i < t; i++) {
    ll a, b;
    cin >> a >> b;

    ll o_s = s[a];
    ll n_s = s[a] + b;

    solve(o_s, n_s, ans);

    m[o_s]--;
    m[n_s]++;
    s[a] = n_s;

    cout << ans << endl;
  }

  return 0;
}