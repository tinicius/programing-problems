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

vector<vector<ll>> dp(3, vector<ll>(1e5 + 1));

int main() {
  _;

  ll n;
  cin >> n;

  vector<ll> a(n);
  vector<ll> b(n);
  vector<ll> c(n);

  for (ll i = 0; i < n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }

  dp[0][0] = a[0];
  dp[1][0] = b[0];
  dp[2][0] = c[0];

  for (ll i = 1; i < n; i++) {
    dp[0][i] = max(dp[1][i - 1], dp[2][i - 1]) + a[i];
    dp[1][i] = max(dp[0][i - 1], dp[2][i - 1]) + b[i];
    dp[2][i] = max(dp[0][i - 1], dp[1][i - 1]) + c[i];
  }

  cout << max({dp[0][n - 1], dp[1][n - 1], dp[2][n - 1]}) << endl;

  return 0;
}