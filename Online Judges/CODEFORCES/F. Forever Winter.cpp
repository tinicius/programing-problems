#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

typedef pair<int, int> pii;

typedef vector<vector<int>> vvi;
typedef vector<vector<bool>> vvb;

bool cmp(pii l, pii r) { return l.second < r.second; }

int main() {
    _;

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> adj(n + 1);

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;

            u--;
            v--;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int x, y;

        for (int i = 0; i < n; i++) {
            if (adj[i].size() == 1) {
                int a = adj[i][0];

                y = adj[a].size() - 1;

                for (auto f : adj[a])
                    if (adj[f].size() != 1) {
                        x = adj[f].size();
                    }

                break;
            }

            // cout << i << ": " << adj[i].size() << endl;
        }

        cout << x << " " << y << endl;
    }

    return 0;
}
