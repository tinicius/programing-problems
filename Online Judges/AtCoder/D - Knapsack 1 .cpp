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

int main() {
    _;

    int n, w;
    cin >> n >> w;

    vector<int> p(n);
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> p[i] >> v[i];

    vector<ll> dp(w + 1);

    for (int i = 0; i < n; i++) {
        for (int pos = w - p[i]; pos >= 0; pos--) {
            dp[pos + p[i]] = max(dp[pos + p[i]], dp[pos] + v[i]);
        }
    }

    ll ans = 0;

    for (int i = 0; i < w + 1; i++) {
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;
}
