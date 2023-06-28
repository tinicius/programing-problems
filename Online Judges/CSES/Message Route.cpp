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
 
vector<vector<int>> adj(1e5 + 10);
vector<bool> vis(1e5 + 10);
vector<int> path(1e5 + 10, -1);
 
void bfs(int i, int n) {
    if (vis[i]) return;
    vis[i] = 1;
 
    queue<int> q;
    q.push(i);
    path[i] = i;
 
    while (!q.empty()) {
        int v = q.front();
 
        for (auto k : adj[v]) {
            if (!vis[k]) {
                path[k] = v;
                q.push(k);
                vis[k] = 1;
            }
        }
 
        q.pop();
    }
}
 
int main() {
    _;
 
    int n, m;
    cin >> n >> m;
 
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
 
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
 
    bfs(1, n);
 
    int ans = 0;
 
    vector<int> c;
 
    int v = n;
 
    while (path[v] != -1) {
        c.push_back(v);
        if (v == path[v]) break;
        v = path[v];
    }
 
    if (c.size() == 0) cout << "IMPOSSIBLE" << endl;
 
    cout << c.size() << endl;
 
    for (int i = c.size() - 1; i >= 0; i--) {
        cout << c[i] << " ";
    }
}