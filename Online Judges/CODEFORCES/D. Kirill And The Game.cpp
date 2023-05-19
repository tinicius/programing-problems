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

    ll l, r, x, y, k;
    cin >> l >> r >> x >> y >> k;

    for (ll i = l; i <= r; i++) {
        if (i % k != 0) continue;

        ll r = i / k;

        if (r >= x && r <= y) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}