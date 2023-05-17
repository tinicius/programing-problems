#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX_H = 200;

vector<vector<bool>> vis(MAX_H, vector<bool>(MAX_H, false));

void dfs(int i, int j, int n, int ca, vector<vector<char>> *matrix) {
    if ((i) < 0 || (j) < 0 || (i) >= n || (j) >= ca) return;

    if (vis[i][j]) return;

    vis[i][j] = true;

    (*matrix)[i][j] = 'T';

    for (auto [im, jm] :
         vector<pair<int, int>>{{-1, 0}, {0, -1}, {1, 0}, {0, 1}}) {
        if ((i + im) < 0 || (j + jm) < 0 || (i + im) >= n || (j + jm) >= ca)
            continue;

        if (!vis[i + im][j + jm] && (*matrix)[i + im][j + jm] == 'A') {
            dfs(i + im, j + jm, n, ca, matrix);
        }
    }
}

int main() {
    vector<vector<char>> matrix;

    string s;

    int n = 0;  // linhas
    int ca = 0;

    int tl;
    int tc;

    while (cin >> s) {
        vector<char> line;

        for (int i = 0; i < s.size(); i++) {
            line.push_back(s[i]);

            if (s[i] == 'T') {
                tl = n;
                tc = i;
            };
        }
        matrix.push_back(line);

        ca = matrix[n].size();

        n++;
    }

    dfs(tl, tc, n, ca, &matrix);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < ca; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}