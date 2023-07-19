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

vector<int> memo(1e5 + 10, -1);
vector<int> a(1e5 + 10);

int c(int i, int k) {
    if (i == 0) return 0;
    if (memo[i] != -1) return memo[i];

    int ret = INF;

    for (int j = max(0, i - k); j < i; j++) {
        ret = min(ret, c(j, k) + abs(a[j] - a[i]));
    }

    memo[i] = ret;
    return memo[i];
}

// Problema da mochila

ll n, m;

vector<ll> weights(110);
vector<ll> values(110);

vector<vector<ll>> memoD(110, vector<ll>((ll)1e5 + 10, (ll)-1));

ll dp(ll i, ll w) {
    if (i == n) return 0;
    if (weights[i] > w) return dp(i + 1, w);

    auto& p = memoD[i][w];

    if (p != -1) return p;

    return p = max(dp(i + 1, w), dp(i + 1, w - weights[i]) + values[i]);
}

int main() {}