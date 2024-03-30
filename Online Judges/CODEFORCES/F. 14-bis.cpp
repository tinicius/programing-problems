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

  ll n, m;
  cin >> n >> m;

  vector<vector<ll>> matrix(n, vector<ll>(m));

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < m; j++) {
      cin >> matrix[i][j];
    }
  }

  ll ans = 0;

  for (ll i = 0; i < n; i++) {
    ll aux = 0;

    for (ll j = 0; j < m - 1; j++) {
      if (abs(matrix[i][j] - matrix[i][j + 1]) <= 1) {
        aux++;
      } else {
        ans = max(ans, aux);
        aux = 0;
      }
    }

    ans = max(ans, aux);
  }

  for (ll j = 0; j < m; j++) {
    ll aux = 0;

    for (ll i = 0; i < n - 1; i++) {
      if (abs(matrix[i][j] - matrix[i + 1][j]) <= 1) {
        aux++;
      } else {
        ans = max(ans, aux);
        aux = 0;
      }
    }

    ans = max(ans, aux);
  }

  cout << ans + 1 << endl;

  return 0;
}