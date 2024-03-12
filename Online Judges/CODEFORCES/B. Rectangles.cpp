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
    ll zero = 0;
    ll one = 0;

    for (ll j = 0; j < m; j++) {
      if (matrix[i][j] == 1)
        one++;
      else
        zero++;
    }

    if (zero != 1) ans += (pow(2, zero) - 1 - zero);
    if (one != 1) ans += (pow(2, one) - 1 - one);
  }

  for (ll i = 0; i < m; i++) {
    ll zero = 0;
    ll one = 0;

    for (ll j = 0; j < n; j++) {
      if (matrix[j][i] == 1)
        one++;
      else
        zero++;
    }

    if (zero != 1) ans += (pow(2, zero) - 1 - zero);
    if (one != 1) ans += (pow(2, one) - 1 - one);
  }

  cout << ans  + (n*m)<< endl;

  return 0;
}