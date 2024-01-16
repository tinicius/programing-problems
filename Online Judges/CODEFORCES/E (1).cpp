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

ll solve(ll h, vector<ll>& a) {
    ll x = 0;

    for (ll i = 0; i < a.size(); i++) {
        if (a[i] >= h) break;

        x += h - a[i];
    }

    return x;
}

int main() {
    _;

    ll t;
    cin >> t;

    while (t--) {
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        ll lh = 0;
        ll rh = 2e9 + 10;

        while (lh + 1 < rh) {
            ll h = (lh + rh) / 2;

            if (solve(h, a) <= x) {
                lh = h;
            } else {
                rh = h;
            }
        }

        cout << lh << endl;
        // cout << rh << endl
    }

    return 0;
}