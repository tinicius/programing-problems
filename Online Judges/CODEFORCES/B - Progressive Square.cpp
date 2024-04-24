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

  ll t;
  cin >> t;

  while (t--) {
    ll n, c, d;
    cin >> n >> c >> d;

    vector<ll> b(n * n);
    for (auto& b_i : b) cin >> b_i;

    sort(b.begin(), b.end());

    vector<vector<ll>> a(n, vector<ll>(n));

    a[n - 1][n - 1] = b[(n * n) - 1];

    vector<ll> aux;
    aux.push_back(b[(n * n) - 1]);

    bool valid = true;

    for (ll i = n - 1; i >= 0; i--) {
      for (ll j = n - 1; j >= 0; j--) {
        if (i == n - 1 and j == n - 1) continue;

        if (i + 1 < n and j + 1 < n) {
          ll x = a[i + 1][j] - c;
          ll y = a[i][j + 1] - d;

          if (x != y) valid = false;

          a[i][j] = x;
          aux.push_back(x);
          continue;
        }

        if (i + 1 < n) {
          ll x = a[i + 1][j] - c;

          a[i][j] = x;
          aux.push_back(x);

          continue;
        }

        ll y = a[i][j + 1] - d;

        a[i][j] = y;
        aux.push_back(y);
      }
    }

    sort(aux.begin(), aux.end());

    // for (auto i : b) cout << i << " ";
    // cout << endl;

    // for (auto i : aux) cout << i << " ";
    // cout << endl;

    for (ll i = 0; i < n * n; i++) {
      if (aux[i] != b[i]) valid = false;
    }

    if (!valid) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }

  return 0;
}