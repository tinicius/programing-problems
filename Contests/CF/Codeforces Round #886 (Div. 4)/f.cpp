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

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        unordered_map<ll, ll> place;

        vector<ll> a(n);

        unordered_map<ll, ll> frogs;

        for (ll i = 0; i < n; i++) {
            int jump;
            cin >> jump;

            if (jump <= n) frogs[jump]++;
        }

        ll ans = 0;

        for (auto f : frogs) {
            ll p = 0;

            while (p <= n) {
                place[p] += f.second;

                if (p != 0) ans = max(ans, place[p]);
                p += f.first;
            }
        }

        cout << ans << endl;
    }
}
