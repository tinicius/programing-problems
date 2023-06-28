#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void dijkstra(vector<int> &hosp, vector<int> &dist,
              vector<vector<pair<int, int>>> &graph) {
    priority_queue<pair<int, int>> pq;

    for (auto x : hosp) pq.push({-0, x});
    // pq.push({-0, 3});

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = -pq.top().first;
        pq.pop();

        if (d > dist[u]) continue;

        dist[u] = d;

        for (pair<int, int> pv : graph[u]) {
            int w = d + pv.first;

            if (dist[pv.second] > w) pq.push({-w, pv.second});
        }
    }
}

int main() {
    _;

    int n, m, q;

    while (cin >> n >> m >> q) {
        vector<vector<pair<int, int>>> graph(n);
        vector<int> dist(n, INF);

        for (int i = 0; i < m; i++) {
            int a, b, w;
            cin >> a >> b >> w;

            a--;
            b--;

            graph[a].push_back({w, b});
            graph[b].push_back({w, a});
        }

        vector<int> hosp;

        for (int i = 0; i < q; i++) {
            int x;
            cin >> x;
            x--;
            hosp.push_back(x);
        }

        dijkstra(hosp, dist, graph);

        int ans = 0;

        for (int i = 0; i < n; i++) ans = max(ans, dist[i]);
        cout << ans << endl;
    }
}
