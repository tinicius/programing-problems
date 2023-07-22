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
        double n, c;
        cin >> n >> c;

        double div = 0;

        double a = 0;
        double b = 0;
        // double c = 0;

        for (double i = 0; i < n; i++) {
            double s;
            cin >> s;

            a += 4;
            b += s * 4;

            c -= pow(s, 2);
        }

        // dbg(a);
        // dbg(b);
        // dbg(c);

        double delta = (pow(b, 2)) - (4 * a * -c);

        double x = (-b + sqrt(delta)) / (2 * a);

        cout << fixed << setprecision(0);
        
        cout << x << endl;
    }
}
