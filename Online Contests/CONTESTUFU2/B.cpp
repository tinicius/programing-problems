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

    int t;
    cin >> t;

    // 5 5 2

    // 5 + 0
    // 2 + 1
    // 1 + 0

    while (t--) {
        int e, f, c;
        cin >> e >> f >> c;

        int ans = 0;
        int resto = 0;

        int total = 0;

        ans = (e + f) / c;    // 5
        resto = (e + f) % c;  // 0

        while ((ans + resto) > 1) {
            // dbg(ans);
            // dbg(resto);

            total += ans + resto;

            ans = (ans + resto) / c;
            resto = (total) % c;
        }

        cout << total + resto +ans<< endl;
    }

    return 0;
}