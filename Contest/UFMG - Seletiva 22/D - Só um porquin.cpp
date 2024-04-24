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

  int n, m;
  cin >> n >> m;

  vector<vector<char>> mapa(n, vector<char>(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mapa[i][j];
    }
  }

  vector<pair<int, int>> moves = {
      {-1, 0},
      {1, 0},
      {0, -1},
      {0, 1},
  };

  int ans = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mapa[i][j] == 'W') {
        bool has = false;

        for (auto [x, y] : moves) {
          int u = i + x;
          int v = j + y;

          if (u >= 0 and v >= 0 and u < n and v < m) {
            if (mapa[u][v] == 'P') has = true;
          }
        }

        if (has) ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;
}