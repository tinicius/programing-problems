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

bool cmp(pii l, pii r) { return l.second < r.second; }

bool dfs(int n, int m) {
    if (n == m) return true;

    bool ans = false;

    if (n % 3 == 0) {
        int p1 = n / 3;
        int p2 = n - (n / 3);

        if (p1 >= m) ans = ans || dfs(p1, m);

        if (p2 >= m) ans = ans || dfs(p2, m);
    }

    return ans;
}

int main() {
    _;

    // n +2n = 6

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        if (dfs(n, m))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
