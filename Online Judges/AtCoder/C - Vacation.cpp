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

vector<vector<int>> fun(1e5, vector<int>(3));

vector<vector<int>> memo(1e5, vector<int>(3, -1));

int dp(int i, int f) {
    if (i == -1) return 0;

    auto& p = memo[i][f];

    if (p != -1) return p;

    if (f == 0) return p = fun[i][0] + max(dp(i - 1, 1), dp(i - 1, 2));

    if (f == 1) return p = fun[i][1] + max(dp(i - 1, 0), dp(i - 1, 2));

    if (f == 2) return p = fun[i][2] + max(dp(i - 1, 0), dp(i - 1, 1));
}

int main() {
    _;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        fun[i][0] = a;
        fun[i][1] = b;
        fun[i][2] = c;
    }

    cout << max({dp(n - 1, 0), dp(n - 1, 1), dp(n - 1, 2)}) << endl;

    // bottom up

    vector<int> memo(3, 0);

    for (int i = 0; i < n; i++) {
        auto aux = memo;

        memo[0] = max(aux[1], aux[2]) + fun[i][0];
        memo[1] = max(aux[0], aux[2]) + fun[i][1];
        memo[2] = max(aux[0], aux[1]) + fun[i][2];
    }

    cout << max({memo[0], memo[1], memo[2]}) << endl;
}
