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

ll dp(ll n, unordered_map<ll, ll>& frogs) {
    // cout << n << ": ";
    if (n == 1) return frogs[1];

    ll ans = 0;

    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // cout << frogs[i] << " ";
            ans += frogs[i];
            if (n % (n / i) == 0 and n / i != i) ans += frogs[n / i];
            // if (n % (n / i) == 0 and n / i != i) cout << frogs[n / i] << " ";
        }
    }
    // cout << endl;
    return ans;
}

int main() {
    _;

    int t;
    cin >> t;

    while (t--) {
        unordered_map<ll, ll> frogs;

        ll n;
        cin >> n;

        for (ll i = 0; i < n; i++) {
            ll jump;
            cin >> jump;

            if (jump <= n) frogs[jump]++;
        }

        ll ans = 0;;

        for (ll i = 1; i <= n; i++) ans = max(ans, dp(i, frogs));

        cout << ans << endl;
    }
}
