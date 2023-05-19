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

    ll n, x;
    cin >> n >> x;

    ll atual = 1;

    ll ans = 0;

    while (n--) {
        ll l, r;
        cin >> l >> r;

        ans += ((l - atual) % x);
        ans += (r - l) + 1;

        atual = r + 1;
    }

    cout << ans << endl;

    return 0;
}