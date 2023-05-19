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

    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    if (r1 == r2 || c1 == c2) {
        cout << 1 << " ";
    } else {
        cout << 2 << " ";
    }

    if (((r1 + c1 )% 2 == 0 && (r2 + c2) % 2 != 0) ||
        ((r1 + c1 )% 2 != 0 && (r2 + c2) % 2 == 0)) {
        cout << 0 << " ";
    } else {
        if (abs(r1 - r2) == abs(c1 - c2)) {
            cout << 1 << " ";
        } else {
            cout << 2 << " ";
        }
    }

    cout << max(abs(r1 - r2), abs(c1 - c2)) << endl;

    return 0;
}