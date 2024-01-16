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
        ll n, k;
        cin >> n >> k;

        string p;
        cin >> p;

        ll ans = 0;

        for (ll i = 0; i < n; i++) {
            if (p[i] == 'B') {
                for (ll j = i; j < i + k; j++) {
                    if (j < n) p[j] = 'W';
                }

                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}