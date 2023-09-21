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

    int d, c, r;
    cin >> d >> c >> r;

    vector<int> can(c);

    for (int i = 0; i < c; i++) {
        cin >> can[i];
    }

    int ans = 0;

    for (int i = 0; i < r; i++) {
        int a;
        cin >> a;

        ans++;
        d += a;
    }

    for (int i = 0; i < c; i++) {
        if (d >= can[i]) {
            ans++;
            d -= can[i];
        } else
            break;
    }

    cout << ans << endl;

    return 0;
}
