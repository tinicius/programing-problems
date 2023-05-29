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
    int n;
    cin >> n;

    vector<vector<int>> m(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    int dig = 0;

    int lc;

    for (int i = 0; i < n; i++) {
        int lin = 0;
        int col = 0;

        for (int j = 0; j < n; j++) {
            lin += m[i][j];
            col += m[j][i];

            if (i == j) dig += m[i][j];
        }

        if (lin != col) {
            cout << "-1" << endl;
            // return 0;
        }

        lc = lin;
    }

    // 02 11 22

        for (int i = 0; i < n; i++) {
        cout << i << (n - 1) - i << " ";
    }

    dbg(dig);

    return 0;
}
