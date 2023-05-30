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

    // cout << 2000000000 - (2000000000 / 2) << endl;
    // return 0;

    ll q;
    cin >> q;

    while (q--) {
        ll n, k;
        cin >> n >> k;

        ll l = 0;
        ll r = LINF;

        // l <
        // r >=

        ll ans;

        while (r > l + 1) {
            ll m = (l + r) / 2;

            ll t = ceil(m - (m / n));

            if (t < k)
                l = m;
            else
                r = m;
        }

        cout << l + 1 << endl;
    }

    return 0;
}
