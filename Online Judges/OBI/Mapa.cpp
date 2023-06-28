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

vector<vector<char>> mapa(110, vector<char>(110));

vector<vector<bool>> vis(110, vector<bool>(110, 0));
void bfs(int i, int j, int n, int m) {
    if (vis[i][j]) return;
    vis[i][j] = 1;

    queue<pair<int, int>> q;
    q.push({i, j});

    vector<pair<int, int>> moves = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

    pair<int, int> end;

    while (!q.empty()) {
        pair<int, int> f = q.front();

        end = {f.first, f.second};

        for (auto k : moves) {
            int l = f.first + k.first;
            int c = f.second + k.second;

            if (l >= 0 and c >= 0 and l < n and c < m) {
                if (!vis[l][c]) {
                    vis[l][c] = 1;

                    if (mapa[l][c] == 'H') q.push({l, c});
                }
            }
        }

        q.pop();
    }

    cout << end.first + 1 << " " << end.second + 1 << endl;
}

int main() {
    _;

    int n, m;
    cin >> n >> m;

    pair<int, int> start;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> mapa[i][j];
            if (mapa[i][j] == 'o') start = {i, j};
        };

    bfs(start.first, start.second, n, m);
}