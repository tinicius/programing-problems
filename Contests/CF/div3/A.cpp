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

    // while (t--) {
    //     double a, b, c;
    //     cin >> a >> b >> c;

    //     cout << ceil(ceil(abs(a - b) / 2) / c) << endl;
    // }

    while (t--) {
        double a, b, c;
        cin >> a >> b >> c;

        int ans = 0;

        while (a != b) {
            // dbg(a);
            // dbg(b);
            if (abs(a - b) < c) {
                double aux = abs(a - b) / 2;
                if (a > b) {
                    a -= aux;
                    b += aux;
                } else {
                    a += aux;
                    b -= aux;
                }
            } else {
                if (a > b) {
                    a -= c;
                    b += c;
                } else {
                    a += c;
                    b -= c;
                }
            }

            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
