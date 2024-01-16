#include <bits/stdc++.h>

#include <fstream>
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

    ll t;
    cin >> t;

    while (t--) {
        int ans = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                char a;
                cin >> a;

                if (a == 'X') {
                    if (i == 0 || j == 0 || i == 9 || j == 9) ans += 1;
                    if (((i == 1 or i == 8) and (j > 0 and j < 9)) or
                        ((j == 1 or j == 8) and (i > 0 and i < 9)))
                        ans += 2;
                    if (((i == 2 or i == 7) and (j > 1 and j < 8)) or
                        ((j == 2 or j == 7) and (i > 1 and i < 8)))
                        ans += 3;
                    if (((i == 3 or i == 6) and (j > 2 and j < 7)) or
                        ((j == 3 or j == 6) and (i > 2 and i < 7)))
                        ans += 4;
                    if (((i == 4 or i == 5) and (j > 3 and j < 6)) or
                        ((j == 5 or j == 5) and (i > 3 and i < 6)))
                        ans += 5;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}