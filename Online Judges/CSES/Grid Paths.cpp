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

vector<vector<ll>> dp(1001, vector<ll>(1001, -1));

vector<vector<char>> m(1001, vector<char>(1001));

ll n;

ll move(ll i, ll j) {
  if (i >= n or j >= n) return 0;

  if (dp[i][j] != -1) return dp[i][j] % ((ll)1e9 + 7);
  if (m[i][j] == '*') return dp[i][j] = 0;

  if (i == n - 1 and j == n - 1) return dp[i][j] = 1;

  return dp[i][j] = (move(i + 1, j) + move(i, j + 1)) % ((ll)1e9 + 7);
}

int main() {
  _;

  cin >> n;

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      cin >> m[i][j];
    }
  }

  cout << move(0, 0) << endl;

  return 0;
}