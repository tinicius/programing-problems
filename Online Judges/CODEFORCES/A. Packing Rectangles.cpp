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

ll w, h, n;

bool f(ll i) { return ((i / w) * (i / h) >= n); }

int main() {
    _;

    cin >> w >> h >> n;

    ll k = 1;

    while (!f(k)) k *= 2;

    ll l = 0;
    ll r = k;

    while (r > l + 1) {
        ll m = (l + r) / 2;
        
        if (f(m))
            r = m;
        else
            l = m;
    }

    cout << r << endl;
}
