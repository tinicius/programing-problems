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

ll l, c;

ll divi(ll i, ll j) {
  if (i == 0 and j == 0) return 3;
  if (i == 0 and j == c - 1) return 3;
  if (i == l - 1 and j == 0) return 3;
  if (i == l - 1 and j == c - 1) return 3;

  if (i == 0 or j == 0 or i == l - 1 or j == c - 1) return 5;

  return 8;
}

void print(vector<vector<ll>> m) {
  for (ll i = 0; i < l; i++) {
    for (ll j = 0; j < c; j++) {
      cout << m[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;
}

int main() {
  _;

  cin >> l >> c;

  vector<vector<ll>> m(l, vector<ll>(c));

  for (ll i = 0; i < l; i++) {
    for (ll j = 0; j < c; j++) {
      cin >> m[i][j];
    }
  }

  ll a, b;
  cin >> a >> b;

  a--;
  b--;

  if (l == 1 and c == 1) {
    cout << m[0][0] << endl;
    return 0;
  }

  ll count = 0;

  // O(L + C + 1)
  while (count < l + c) {
    vector<pair<ll, ll>> moves = {{0, -1}, {-1, -1}, {-1, 0}, {-1, 1},
                                  {0, 1},  {1, 1},   {1, 0},  {1, -1}};

    // ll d = divi(a, b);

    ll d = 0;

    for (auto [f, s] : moves) {
      ll u = a + f;
      ll v = b + s;
      if (u < 0 or v < 0 or u >= l or v >= c) continue;
      d++;
    }

    ll value = m[a][b] / d;

    ll aux = 0;
    ll x = -1, y = -1;

    m[a][b] -= (value * d);

    // O(8)
    for (auto [f, s] : moves) {
      ll u = a + f;
      ll v = b + s;

      if (u < 0 or v < 0 or u >= l or v >= c) continue;

      m[u][v] += value;

      if (x == -1 and y == -1) {
        x = u;
        y = v;
      }

      if (m[u][v] > aux) {
        x = u;
        y = v;

        aux = m[u][v];
      }
    }

    a = x;
    b = y;

    count++;

    // print(m);
  }

  ll ans = 0;

  for (ll i = 0; i < l; i++) {
    for (ll j = 0; j < c; j++) {
      ans = max(ans, m[i][j]);
    }
  }

  cout << ans << endl;

  return 0;
}