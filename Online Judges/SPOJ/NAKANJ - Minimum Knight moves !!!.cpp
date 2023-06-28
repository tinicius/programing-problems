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

void bfs(int i, int j, int n, int m, vector<vector<bool>> *vis,
         vector<vector<pair<int, int>>> *pai) {
    if ((*vis)[i][j]) return;
    (*vis)[i][j] = 1;

    (*pai)[i][j] = {i, j};

    queue<pair<int, int>> q;
    q.push({i, j});

    vector<pair<int, int>> moves = {{-2, 1}, {-1, 2}, {1, 2},   {2, 1},
                                    {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};

    while (!q.empty()) {
        pair<int, int> f = q.front();
        q.pop();

        for (auto k : moves) {
            int l = f.first + k.first;
            int c = f.second + k.second;

            if (l >= 0 and c >= 0 and l < n and c < m) {
                if (!(*vis)[l][c]) {
                    (*vis)[l][c] = 1;
                    (*pai)[l][c] = {f.first, f.second};
                    q.push({l, c});
                }
            }
        }
    }
}

int main() {
    // _;

    int t;
    cin >> t;

    while (t--) {
        cin.ignore();
        string s, e;
        cin >> s >> e;

        pair<int, int> st, en;

        st = {s[1] - '0' - 1, s[0] - 'a'};
        en = {e[1] - '0' - 1, e[0] - 'a'};

        vector<vector<bool>> vis(10, vector<bool>(10, 0));

        vector<vector<pair<int, int>>> pai(
            10, vector<pair<int, int>>(10, {-1, -1}));

        bfs(st.first, st.second, 8, 8, &vis, &pai);

        vector<pair<int, int>> c;

        pair<int, int> p = en;

        while (pai[p.first][p.second].first != -1 &&
               pai[p.first][p.second].second != -1) {
            c.push_back(p);

            if (pai[p.first][p.second].first == p.first &&
                pai[p.first][p.second].second == p.second)
                break;

            p = pai[p.first][p.second];
        }

        cout << c.size() - 1 << endl;
    }
}