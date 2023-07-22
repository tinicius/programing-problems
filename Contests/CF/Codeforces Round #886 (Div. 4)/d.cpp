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

int main() {
    _;

    ll t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        ll big = 0;
        ll aux = 0;

        for (ll i = 0; i < n - 1; i++) {
            if (abs(a[i] - a[i + 1]) > k) {
                big = max(big, aux);
                aux = 0;
            } else
                aux++;
        }

        big = max(big, aux);

        cout << n - (big + 1) << endl;
    }
}
