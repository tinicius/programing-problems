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

#define MAX 1e5 + 10

vector<vector<int>> edge(MAX, vector<int>());

vector<int> memo(MAX,-1);

int dp(int n) {
    auto& p = memo[n];

    if (p != -1) return p;

    if (edge[n].size() == 0) return p = 0;

    int ans = 0;

    for (auto w : edge[n]) ans = max(ans, dp(w));

    return p = ans + 1;
}

int main() {
    _;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        edge[a].push_back(b);
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        ans = max(ans, dp(i));
    }

    cout << ans << endl;
}
