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

vector<vector<char>> board;

vector<vector<bool>> vis;

void bfs(int i, int j) {
  vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

  queue<pair<int, int>> q;
  q.push({i, j});
  vis[i][j] = 1;

  while (q.size()) {
    auto [u, v] = q.front();
    q.pop();

    for (auto [mx, my] : moves) {
      int x = u + mx;
      int y = v + my;

      if (x < 0 || y < 0 || x >= n || y >= m) continue;
      if (vis[x][y]) continue;

      if (board[x][y] == 'A') {
        vis[x][y] = 1;
        board[x][y] = 'T';

        q.push({x, y});
      }
    }
  }
}

int main() {
  _;

  while (cin >> n >> m) {
    if (n == 0 and m == 0) break;

    board = vector<vector<char>>(n, vector<char>(m));
    vis = vector<vector<bool>>(n, vector<bool>(m));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) cin >> board[i][j];
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (board[i][j] == 'T') bfs(i, j);
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cout << board[i][j];
      }
      cout << endl;
    }

    cout << endl;
  }

  return 0;
};