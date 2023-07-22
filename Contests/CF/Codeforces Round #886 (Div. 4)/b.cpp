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
        int n;
        cin >> n;

        int winner = -1;
        int pto = 0;

        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;

            if (a <= 10) {
                if (b >= pto) {
                    pto = b;
                    winner = i + 1;
                }
            }
        }

        cout << winner << endl;
    }
}
