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

vector<vector<char>> chess(101, vector<char>(101));

vector<vector<bool>> vis(101, vector<bool>(101, 0));

int n, m;

void dfs(int i, int j, char p) {
  if (i < 0 || j < 0 || i >= n || j >= m) return;
  if (vis[i][j]) return;
  if (chess[i][j] != '.') return;

  vis[i][j] = 1;
  chess[i][j] = p;

  vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

  for (auto [mx, my] : moves) {
    int u = i + mx;
    int v = j + my;

    if (p == 'B') dfs(u, v, 'W');
    if (p == 'W') dfs(u, v, 'B');
  }
}

int main() {
  _;

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> chess[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if ((i + j) % 2 == 0 and chess[i][j] == '.') chess[i][j] = 'B';
      if ((i + j) % 2 != 0 and chess[i][j] == '.') chess[i][j] = 'W';
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << chess[i][j];
    }
    cout << endl;
  }

  return 0;
}