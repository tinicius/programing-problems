#include <bits/stdc++.h>

#include <fstream>
using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll mdc(ll a, ll b) {
    while (b != 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Algoritmo do MMC
ll mmc(ll a, ll b) { return a * (b / mdc(a, b)); }


int main() {
    _;

    ll t;
    cin >> t;

    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;

        ll comuns = n / mmc(x, y);

        // dbg(comuns);

        ll mulX = (n / x) - comuns;
        ll mulY = (n / y) - comuns;

        // dbg(mulX);
        // dbg(mulY);

        ll ans = 0;

        ll a1 = (n - (mulX - 1));

        ans = ((a1 + n) * mulX) / 2;

        ll an = 1 + (mulY - 1);

        ans -= ((1 + an) * mulY) / 2;

        cout << ans << endl;
    }

    return 0;
}
