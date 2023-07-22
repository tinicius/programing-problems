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

ll n, x, y;

bool f(ll m) {
    ll aux = m - min(x, y);

    if (m > min(x, y))
        return ((aux / x) + (aux / y) + 1) >= n;
    else
        return m / min(x, y) >= n;
};

int main() {
    _;

    cin >> n >> x >> y;

    ll l = 0;
    ll r = 2*1e9;

    while (r > l + 1) {
        ll m = (r + l) / 2;

        if (f(m))
            r = m;
        else
            l = m;

    }

    cout << r << endl;
}
