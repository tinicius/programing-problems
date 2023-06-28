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

#define MAX (2*1e5) + 10

vector<vector<pair<ll, ll>>> graph(MAX, vector<pair<ll, ll>>());

vector<ll> dijkstra(ll i, int n) {
    priority_queue<pair<ll, ll>> pq;
    pq.push({-0, i});

    vector<ll> dist(n, LINF);

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

    return dist;
}

int main() {
    _;

    ll n, m, x;
    cin >> n >> m >> x;

    for (ll i = 0; i < m; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        u--;
        v--;

        graph[u].push_back({w, v});
        graph[v].push_back({w, u});
    }

    vector<ll> amigos;

    for (ll i = 0; i < x; i++) {
        ll a;
        cin >> a;
        a--;
        amigos.push_back(a);
    }

    vector<ll> sa = dijkstra(0, n);

    vector<ll> as = dijkstra(n - 1, n);

    ll ans = LINF;

    for (ll a : amigos) {
        ans = min(ans, sa[a] + as[a]);
    }

    cout << ans << endl;
}