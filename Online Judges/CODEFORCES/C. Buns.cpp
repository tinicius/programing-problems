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

int n, m, c0, d0;
vector<int> a(11);
vector<int> b(11);
vector<int> c(11);
vector<int> d(11);

int dp(int i, int f, int ai) {
    if (i == n) return 0;
    dbg(i);

    int without = 0;

    if (f >= c0) {
        without = dp(i, f - c0, a[i]);
        if (i + 1 < n) without = max(without, dp(i + 1, f - c0, a[i + 1]));
    }

    int recheio = 0;

    if (f >= c[i] && a[i] >= b[i]) {
        recheio =
            max(dp(i, f - c[i], a[i] - b[i]), dp(i + 1, f - c[i], a[i] - b[i]));
    }

    return max({without, recheio, dp(i + 1, f, ai)});
}

int main() {
    _;

    cin >> n >> m >> c0 >> d0;

    for (int i = 0; i < m; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    vector<int> dp(n + 10);

    for (int recheio = 0; recheio < m; recheio++) {
        for (int vex = 0; vex < (a[recheio] / b[recheio]); vex++) {
            for (int already = n - c[recheio]; already >= 0; already--) {
                dp[already + c[recheio]] =
                    max(dp[already + c[recheio]], dp[already] + d[recheio]);
            }
        }
    }

    for (int i = 0; i < n / c0; i++) {
        for (int already = n - c0; already >= 0; already--) {
            dp[already + c0] = max(dp[already + c0], dp[already] + d0);
        }
    }

    int ans = 0;

    for (auto i : dp)ans = max(ans, i);

    cout << ans << endl;
}
