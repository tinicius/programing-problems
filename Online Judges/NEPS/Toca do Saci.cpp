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

vector<vector<int>> mapa(1010, vector<int>(1010));
vector<vector<bool>> vis(1010, vector<bool>(1010, 0));
vector<vector<pair<int, int>>> pai(1010,
                                   vector<pair<int, int>>(1010, {-1, -1}));

void bfs(int i, int j, int n, int m) {
    if (vis[i][j]) return;
    vis[i][j] = 1;

    pai[i][j] = {i, j};

    queue<pair<int, int>> q;
    q.push({i, j});

    vector<pair<int, int>> moves = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

    while (!q.empty()) {
        pair<int, int> f = q.front();
        q.pop();

        for (auto k : moves) {
            int l = f.first + k.first;
            int c = f.second + k.second;

            if (l >= 0 and c >= 0 and l < n and c < m) {
                if ((mapa[l][c] == 1 || mapa[l][c] == 2) && !vis[l][c]) {
                    vis[l][c] = 1;
                    pai[l][c] = {f.first, f.second};
                    q.push({l, c});
                }
            }
        }
    }
}

int main() {
    _;

    int n, m;
    cin >> n >> m;

    pair<int, int> start, end;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mapa[i][j];
            if (mapa[i][j] == 3) start = {i, j};
            if (mapa[i][j] == 2) end = {i, j};
        }
    }

    bfs(start.first, start.second, n, m);

    vector<pair<int, int>> c;

    pair<int, int> s = end;

    while (pai[s.first][s.second].first != -1 &&
           pai[s.first][s.second].second != -1) {
        c.push_back(s);
        if (pai[s.first][s.second].first == s.first &&
            pai[s.first][s.second].second == s.second)
            break;

        s = pai[s.first][s.second];
    }

    cout << c.size() << endl;
}