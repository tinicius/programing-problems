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

ll n, m;

void bfs(vector<vector<char>>& board, vector<pair<int, int>> starts) {
  vector<vector<bool>> vis(n, vector<bool>(m, 0));
  vector<vector<int>> dist(n, vector<int>(m, INF));

  queue<pair<int, int>> q;

  for (auto [x, y] : starts) {
    q.push({x, y});
    vis[x][y] = 1;
    dist[x][y] = 0;
  }

  vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();

    for (auto [mx, my] : moves) {
      int u = x + mx;
      int v = y + my;

      if (u < 0 or v < 0 or u >= n or v >= m) continue;
      if (vis[u][v] || board[u][v] == '1') continue;

      // cout << x << " " << y << endl;
      // cout << u << " " << v << endl;
      // cout << endl;

      dist[u][v] = min(dist[u][v], dist[x][y] + 1);
      vis[u][v] = 1;

      q.push({u, v});
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << dist[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  _;

  ll t;
  cin >> t;

  while (t--) {
    cin >> n >> m;

    vector<vector<char>> board(n, vector<char>(m));

    vector<pair<int, int>> starts;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> board[i][j];
        if (board[i][j] == '1') starts.push_back({i, j});
      }
    }

    bfs(board, starts);
  }

  return 0;
}