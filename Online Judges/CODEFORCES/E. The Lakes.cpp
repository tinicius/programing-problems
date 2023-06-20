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

int dfs(int i, int j, vvi *a, vvb *visited, int n, int m, int sum) {
    if (i < 0 || j < 0 || i >= n || j >= m) return 0;
    if ((*a)[i][j] == 0) return 0;

    if ((*visited)[i][j]) return 0;

    // cout << i << j << " " << endl;
    // cout << a[i][j] << endl;

    (*visited)[i][j] = 1;

    sum += (*a)[i][j];

    vector<pair<int, int>> k = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

    for (auto l : k) {
        int p1 = i + l.first;
        int p2 = j + l.second;

        if (!(p1 < 0 || p2 < 0 || p1 >= n || p2 >= m)) {
            // cout << a[p1][p2] << " ";

            sum += dfs(p1, p2, a, visited, n, m, 0);
        };
    }

    // dbg(sum);
    return sum;
}

int main() {
    _;

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<bool>> visited(n, vector<bool>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans = max(ans, dfs(i, j, &a, &visited, n, m, 0));
            }
        }

        cout << ans << endl;
    }

    return 0;
}
