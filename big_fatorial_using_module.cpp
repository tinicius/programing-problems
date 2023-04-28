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
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll all = 0;

        for (ll i = n - 1; i >= 1; i--) {
            all += (i * 2);
        }

        ll fat = 1;

        for (ll i = n; i >= 1; i--) {
            fat = (fat * i) % 1000000007;
        }

        cout << (fat * all) % 1000000007 << endl;
    }

    return 0;
}