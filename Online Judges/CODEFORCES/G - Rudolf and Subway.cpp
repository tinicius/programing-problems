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

const ll MAX = 3 * (2e5 + 10);

vector<vector<int>> adj(MAX);

int n, m;
int b, e;

vector<int> dist(MAX, INF);
vector<bool> vis(MAX);

int bfs() {
  queue<int> q;
  q.push(b);

  dist[b] = 0;

  while (!q.empty()) {
    int u = q.front();
    q.pop();

    for (auto v : adj[u]) {
      if (!vis[v]) {
        vis[v] = 1;
        dist[v] = dist[u] + 1;
        q.push(v);
      }
    }
  }

  // for (int i = 0; i < n; i++) {
  //   cout << i + 1 << " " << dist[i] << endl;
  // }

  return dist[e];
}

int main() {
  _;

  ll t;
  cin >> t;

  while (t--) {
    cin >> n >> m;

    map<int, int> cnt;

    int k = n;

    vector<tuple<int, int, int>> edges;

    int limit = 0;

    for (int i = 0; i < m; i++) {
      int u, v, w;
      cin >> u >> v >> w;

      u--;
      v--;

      auto& p = cnt[w];

      if (!p) {
        p = k;
        k++;
      }

      limit = max(limit, p);

      edges.push_back({u, v, w});
    }

    for (int i = 0; i < limit + 1; i++) {
      vis[i] = 0;
      dist[i] = INF;
      adj[i].clear();
    }

    for (auto [u, v, w] : edges) {
      auto& p = cnt[w];
      adj[u].push_back(p);
      adj[v].push_back(p);
      adj[p].push_back(u);
      adj[p].push_back(v);
    }

    cin >> b >> e;
    b--;
    e--;

    if (b == e) {
      cout << 0 << endl;
      continue;
    }

    int ans = bfs();

    cout << ans / 2 << endl;
  }

  return 0;
};