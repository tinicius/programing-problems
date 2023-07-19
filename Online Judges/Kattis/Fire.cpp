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

#define MAX 1010

vector<vector<char>> matrix(MAX, vector<char>(MAX));
vector<vector<bool>> vis(MAX, vector<bool>(MAX, 0));
vector<vector<int>> dist(MAX, vector<int>(MAX));

vector<pair<int, int>> moves = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

void cleardist() {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            dist[i][j] = INF;
            // vis[i][j] = 0;
        }
    }
}

void clearvis() {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            // dist[i][j] = INF;
            vis[i][j] = 0;
        }
    }
}

void bfs(vector<pair<int, int>> &fires, int m, int n) {
    cleardist();
    clearvis();

    queue<pair<int, int>> q;

    for (auto f : fires) {
        q.push(f);
        vis[f.first][f.second] = 1;
        dist[f.first][f.second] = 0;
    };

    while (!q.empty()) {
        int u = q.front().first;
        int v = q.front().second;
        q.pop();

        for (auto mv : moves) {
            int l = mv.first + u;
            int c = mv.second + v;

            if (l >= 0 and c >= 0 and l < m and c < n) {
                if (matrix[l][c] != '#' and !vis[l][c]) {
                    vis[l][c] = 1;
                    dist[l][c] = dist[u][v] + 1;
                    q.push({l, c});
                }
            }
        }
    }
}

int caminhar(int i, int j, int m, int n) {
    clearvis();

    vis[i][j] = 1;
    dist[i][j] = 0;

    queue<pair<int, int>> q;
    q.push({i, j});

    while (!q.empty()) {
        int u = q.front().first;
        int v = q.front().second;
        q.pop();

        if (u == 0 or v == 0 or u == m - 1 or v == n - 1) {
            return dist[u][v] + 1;
        }

        for (auto mv : moves) {
            int l = mv.first + u;
            int c = mv.second + v;

            if (l >= 0 and c >= 0 and l < m and c < n) {
                if (matrix[l][c] != '#' and !vis[l][c] and
                    dist[u][v] + 1 < dist[l][c]) {
                    //
                    vis[l][c] = 1;
                    dist[l][c] = dist[u][v] + 1;
                    q.push({l, c});
                }
            }
        }
    }

    return -1;
}

int main() {
    _;

    int t;
    cin >> t;

    while (t--) {
        int m, n;
        cin >> n >> m;

        vector<pair<int, int>> fires;
        pair<int, int> start;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                char c;
                cin >> c;

                if (c == '*') fires.push_back({i, j});
                if (c == '@') start = {i, j};

                matrix[i][j] = c;
            }
        }

        bfs(fires, m, n);

        auto ans = caminhar(start.first, start.second, m, n);

        if (ans == -1)
            cout << "IMPOSSIBLE" << endl;
        else
            cout << ans << endl;
    }
}
