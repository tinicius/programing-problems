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

vector<vector<int>> matrix(210, vector<int>(210));
vector<vector<bool>> vis(210, vector<bool>(210, 0));

void bfs(int i, int j, int n, int m) {
    if (vis[i][j]) return;

    queue<pair<int, int>> q;
    q.push({i, j});

    vector<pair<int, int>> moves = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

    while (!q.empty()) {
        int u = q.front().first;
        int v = q.front().second;
        q.pop();

        if (vis[u][v]) continue;
        vis[u][v] = 1;

        for (auto k : moves) {
            int l = u + k.first;
            int c = v + k.second;

            if (l >= 0 and c >= 0 and l < n and c < m) {
                if (!vis[l][c] and matrix[l][c] == matrix[i][j]) {
                    // vis[l][c] = 1;
                    q.push({l, c});
                }
            }
        }
    }
}

int main() { _; }