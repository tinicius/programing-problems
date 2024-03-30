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

int main() {
  _;

  ll n, W;
  cin >> n >> W;

  vector<ll> w(n);
  vector<ll> v(n);

  for (ll i = 0; i < n; i++) cin >> w[i] >> v[i];

  ll sum = accumulate(v.begin(), v.end(), 0);

  vector<ll> dp(sum + 1, INF);

  dp[0] = 0;

  for (ll i = 0; i < n; i++) {
    for (ll p = sum - v[i]; p >= 0; p--) {
      dp[p + v[i]] = min(dp[p + v[i]], dp[p] + w[i]);
    }
  }

  ll ans = 0;

  for (ll i = 0; i <= sum; i++) {
    if (dp[i] <= W) {
      ans = max(ans, i);
    }
  }

  cout << ans << endl;

  return 0;
}