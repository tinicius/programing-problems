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

#define MAX (int)500

void dijkstra(ll i, vector<ll> &dist, vector<vector<pair<ll, ll>>> &graph) {
    priority_queue<pair<ll, ll>> pq;
    pq.push({-0, i});

    while (!pq.empty()) {
        ll u = pq.top().second;
        ll d = -pq.top().first;
        pq.pop();

        if (d > dist[u]) continue;

        dist[u] = d;

        for (pair<ll, ll> pv : graph[u]) {
            ll w = d + pv.first;

            if (dist[pv.second] > w) pq.push({-w, pv.second});
        }
    }
}

int main() {
    _;

    string s, c;
    cin >> s >> c;

    ll m;
    cin >> m;

    vector<vector<pair<ll, ll>>> graph(127, vector<pair<ll, ll>>(127));

    for (ll i = 0; i < m; i++) {
        char a, b;
        ll c;
        cin >> a >> b;
        cin >> c;

        graph[a].push_back({c, b});
        // graph[b].push_back({c, a});
    }

    ll ans = 0;

    vector<vector<int>> cost(127, vector<int>(127));

    for (int i = 33; i <= 126; i++) {
        vector<ll> dist(127, INF);
        dijkstra(i, dist, graph);

        for (int j = 33; j <= 126; j++) {
            cost[i][j] = dist[j];
        }
    }

    for (ll i = 0; i < s.size(); i++) {
        int prize = cost[s[i]][c[i]];

        if (prize == INF) {
            cout << -1 << endl;
            return 0;
        }

        ans += prize;
    }

    cout << ans << endl;
}
