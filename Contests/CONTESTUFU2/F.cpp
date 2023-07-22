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

int main() {
    _;

    long long c, p;

    while (cin >> c) {
        if (c == 0) break;
        cin >> p;

        // if (c == 1 && p == 1) cout << 0 << " " << 0 << endl;

        long long m, n;

        // 4m + 2n = p
        //  m + n = c

        // 4m + 2n = p
        //  2m + 2n = 2c

        // 2m = p - 2c

        m = (p - (2 * c)) / 2;
        n = c - m;

        cout << n << " " << m << endl;
    }

    return 0;
}