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
        int n, x, y;
        cin >> n >> x >> y;

        int qtx = n / x;
        int qty = n / y;

        int qt = n /(x*y);
        dbg(qt);

        int a = 0;
        int b = 0;

        for (int i = 0; i < (qtx - qt); i++) {
            dbg(n - i);
            a += (n - i);
        }

        for (int i = 0; i < (qty - (n / (x*y))); i++) {
            dbg(1 + i);
            b += (1 + i);
        }

        cout << a - b << endl;
    }

    return 0;
}
