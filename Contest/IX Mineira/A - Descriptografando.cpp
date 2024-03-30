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

int n, m;

int a, b;

vector<vector<int>> dist(1001, vector<int>(1001));
vector<vector<bool>> vis(1001, vector<bool>(1001, 0));

void bfs(vector<vector<char>>& room, int i, int j) {
  queue<pair<int, int>> q;
  q.push({i, j});
  dist[i][j] = 1;
  vis[i][j] = 1;

  vector<pair<int, int>> moves = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

  while (!q.empty()) {
    auto [u, v] = q.front();
    q.pop();

    for (auto [f, s] : moves) {
      int x = u + f;
      int y = v + s;

      if (x < 0 || y < 0 || x >= n || y >= m) continue;
      if (vis[x][y]) continue;

      if (room[x][y] == '.') {
        dist[x][y] = dist[u][v] + 1;
        vis[x][y] = 1;

        q.push({x, y});
      }
    }
  }
}

int gcd(int a, int b) { return 0; }

int main() {
  _;

  int t, c_i, c_j;
  cin >> n >> m >> t >> c_i >> c_j;

  c_i--;
  c_j--;

  vector<vector<char>> room(n, vector<char>(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> room[i][j];

      if (room[i][j] == '.') b++;
    }
  }

  bfs(room, c_i, c_j);

  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < m; j++) {
  //     cout << dist[i][j] << " ";
  //   }

  //   cout << endl;
  // }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int d = dist[i][j];

      if (d != 0 and d <= t + 1) a++;
    }
  }

  int aux = gcd(a, b);

  while (aux != 1) {
    a /= aux;
    b /= aux;

    aux = gcd(a, b);
  }

  cout << a << " " << b << endl;

  return 0;
}