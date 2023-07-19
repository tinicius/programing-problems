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

ll n, m;

vector<ll> weights(110);
vector<ll> values(110);

vector<vector<ll>> memo(110, vector<ll>(1e5 + 10, -1));

ll dp(ll i, ll m) {
    if (i == n) return 0;
    if (weights[i] > m) return dp(i + 1, m);

    auto& p = memo[i][m];

    if (p != -1) return p;

    return p = max(dp(i + 1, m), dp(i + 1, m - weights[i]) + values[i]);

}

int main() {
    _;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        ll w, v;
        cin >> w >> v;

        weights[i] = w;
        values[i] = v;
    }

    cout << dp(0, m) << endl;
}
