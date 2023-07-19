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

int main() {
    _;

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        int ret = INF;

        for (int j = max(0, i - k); j < i; j++) {
            ret = min(ret, memo[j] + abs(a[j] - a[i]));
        }

        memo[i] = ret;

    }

    cout << memo[n-1] << endl;
}
