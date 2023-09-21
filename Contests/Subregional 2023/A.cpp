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

    int n, h;
    cin >> n >> h;

    int ans = 0;

    while (n--) {
        int a;
        cin >> a;

        if (a <= h) ans++;
    }

    cout << ans << endl;

    return 0;
}
