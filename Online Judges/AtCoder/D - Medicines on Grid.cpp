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

int n;
int h, w;

vector<vector<char>> mapa(301, vector<char>(301));

vector<int> val(301);
vector<pair<int, int>> pos(301);

vector<vector<int>> medpos(301, vector<int>(301));

vector<vector<int>> graph(301);

void bfs(int m) {
  vector<vector<int>> vis(301, vector<int>(301));
  vector<vector<int>> his(301, vector<int>(301));

  vis[pos[m].first][pos[m].second] = 1;
  his[pos[m].first][pos[m].second] = val[m];

  priority_queue<pair<int, int>> q;
  q.push(pos[m]);

  vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

  while (!q.empty()) {
    auto [x, y] = q.top();
    q.pop();

    for (auto [u, v] : moves) {
      int a = x + u;
      int b = y + v;

      if (a >= 0 and b >= 0 and a < h and b < w and his[x][y] > 0 and
          !vis[a][b] and mapa[a][b] != '#') {
        his[a][b] = his[x][y] - 1;
        vis[a][b] = 1;
        q.push({a, b});

        if (medpos[a][b] != 0) {
          graph[m].push_back(medpos[a][b]);
        }
      }
    }
  }
}

bool ans(int m) {
  vector<bool> vis(301, 0);
  vis[m] = 1;

  priority_queue<int> q;
  q.push(m);

  while (!q.empty()) {
    int x = q.top();
    q.pop();

    if (x == n + 1) return true;

    for (auto u : graph[x]) {
      if (!vis[u]) {
        vis[u] = 1;
        q.push(u);
      }
    }
  }

  return false;
}

int main() {
  _;

  cin >> h >> w;

  int si, sj, ei, ej;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char a;
      cin >> a;

      mapa[i][j] = a;

      if (a == 'S') {
        si = i;
        sj = j;
      }
      if (a == 'T') {
        ei = i;
        ej = j;
      }
    }
  }

  cin >> n;

  for (int i = 0; i < n; i++) {
    int r, c, e;
    cin >> r >> c >> e;
    r--;
    c--;

    medpos[r][c] = i + 1;
    val[i + 1] = e;
    pos[i + 1] = {r, c};
  }

  if (medpos[si][sj] == 0) {
    cout << "No" << endl;
    return 0;
  }

  int idx = medpos[si][sj];

  if (val[idx] <= 0) {
    cout << "No" << endl;
    return 0;
  }

  medpos[ei][ej] = n + 1;
  val[n + 1] = 1;
  pos[n + 1] = {ei, ej};

  for (int i = 0; i < n; i++) {
    bfs(i + 1);
  }

  if (ans(idx))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}