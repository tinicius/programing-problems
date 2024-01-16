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
        int n;
        cin >> n;

        vector<int> s(n);
        vector<int> e(n);

        for (int i = 0; i < n; i++) {
            cin >> s[i];
            cin >> e[i];
        }

        int ps = s[0];
        int pe = e[0];

        int max_n_pode = 0;

        for (int i = 1; i < n; i++) {
            if (e[i] >= pe) {
                max_n_pode = max(max_n_pode, s[i]);
            }
        }

        if (max_n_pode >= s[0]) {
            cout << -1 << endl;
        } else {
            cout << max_n_pode + 1 << endl;
        }
    }

    return 0;
}