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

ll k(map<ll, ll>& x) {

    ll ans = 0;

    for (auto i : x) {
        if (i.second > 1) ans += i.second * (i.second - 1);
    }

    return ans;
}

int main() {
    _;

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        map<ll, ll> x;
        map<ll, ll> y;
        map<ll, ll> d;
        map<ll, ll> e;

        for (ll i = 0; i < n; i++) {
            ll a, b;
            cin >> a >> b;

            x[a]++;
            y[b]++;

            d[a - b]++;
            e[a + b]++;
        }

        cout << k(x) + k(y) + k(d) + k(e) << endl;
    }
}
