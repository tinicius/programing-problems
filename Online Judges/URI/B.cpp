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

    long long a, b, c;
    cin >> a >> b >> c;

    char op;
    cin >> op;

    double ans = 0;

    if (op == 'A') {
        ans += (3.0 * b) / 2.0;
        ans += (5.0 * c) / 2.0;
        ans += a;
    } else if (op == 'B') {
        ans += (2.0 * a) / 3.0;
        ans += (5.0 * c) / 3.0;
        ans += b;
    } else {
        ans += (2.0 * a) / 5.0;
        ans += (3.0 * b) / 5.0;
        ans += c;
    }

    cout << fixed << setprecision(0) << floor(ans) << endl;

    return 0;
}
