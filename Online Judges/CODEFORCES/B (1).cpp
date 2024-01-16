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

int main() {
    _;

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        };

        sort(a.begin(), a.end());

        a[0]++;

        ll ans = 1;

        for (auto i : a) ans *= i;

        cout << ans << endl;
    }

    return 0;
}