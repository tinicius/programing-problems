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

  int n, W;
  cin >> n >> W;

  vector<ll> w(n);
  vector<ll> v(n);

  for (ll i = 0; i < n; i++) cin >> w[i] >> v[i];

  vector<ll> dp(W + 1);

  for (ll i = 0; i < n; i++) {
    for (ll p = W - w[i]; p >= 0; p--) {
      dp[p + w[i]] = max(dp[p + w[i]], dp[p] + v[i]);
    }
  }

  ll ans = 0;

  for (ll i = 0; i < W + 1; i++) ans = max(ans, dp[i]);

  cout << ans << endl;

  return 0;
}