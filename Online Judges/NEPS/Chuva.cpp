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

vector<vector<char>> matrix(510, vector<char>(510));
vector<vector<bool>> vis(510, vector<bool>(510, 0));

void bfs(int i, int j, int n, int m) {
    if (vis[i][j]) return;

    queue<pair<int, int>> q;
    q.push({i, j});

    // vector<pair<int, int>> moves = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

    while (!q.empty()) {
        int u = q.front().first;
        int v = q.front().second;
        q.pop();

        if (vis[u][v]) continue;
        vis[u][v] = 1;

        if (u + 1 < n && matrix[u + 1][v] == '.') {
            matrix[u + 1][v] = 'o';
            q.push({u + 1, v});
        } else {
            if (u + 1 < n && matrix[u + 1][v] == 'o') continue;

            if (v + 1 < m && matrix[u][v + 1] == '.' && u != n - 1) {
                matrix[u][v + 1] = 'o';
                q.push({u, v + 1});
            }

            if (v - 1 >= 0 && matrix[u][v - 1] == '.' && u != n - 1) {
                matrix[u][v - 1] = 'o';
                q.push({u, v - 1});
            }
        }
    }
}

int main() {
    _;

    int n, m;
    cin >> n >> m;

    pair<int, int> inicio;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            char num;
            cin >> num;

            if (num == 'o') {
                inicio.first = i;
                inicio.second = j;
            }

            matrix[i][j] = num;
        };

    int ans = INF;

    bfs(inicio.first, inicio.second, n, m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}
