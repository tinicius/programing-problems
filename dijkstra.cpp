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

#define MAX 10

vector<pair<int, int>> graph[MAX];
vector<int> dist(MAX, INF);

void dijkstra(int x) {
    priority_queue<pair<int, int>> pq;
    pq.push({-0, x});

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

int main() { _; }