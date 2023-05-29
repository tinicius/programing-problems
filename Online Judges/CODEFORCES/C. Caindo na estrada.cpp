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

    ll n;
    cin >> n;

    vector<ll> a(n);
    vector<ll> b(n);

    for (ll i = 0; i < n; i++) cin >> a[i];

    b[0] = a[0];
    b[1] = max(a[0], a[1]);

    for (ll i = 2; i < n; i++) {
        b[i] = max(a[i] + b[i - 2], b[i - 1]);
    }

    cout << b[b.size() - 1] << endl;

    return 0;
}