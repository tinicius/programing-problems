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

    ll n;
    cin >> n;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++) cin >> a[i];

    ll ans = (n * (n - 1)) / 2;

    sort(a.begin(), a.end());

    ll aux = 0;

    // dbg(ans);

    for (ll i = 1; i < n; i++) {
        if (a[i - 1] == a[i]) {
            aux++;
        } else {
            aux++;
            ans -= (aux * (aux - 1)) / 2;
            // dbg(aux);
            aux = 0;
        }
    }

    aux++;
    ans -= (aux * (aux - 1)) / 2;
    // dbg(aux);

    cout << ans << endl;

    return 0;
}
