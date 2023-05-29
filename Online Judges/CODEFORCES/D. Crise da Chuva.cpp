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

    int n, m, k, q;
    cin >> n >> m >> k >> q;

    vector<vector<int>> time(n + 42, vector<int>(m + 42, -1));
    vector<vector<int>> c(n + 42, vector<int>(m + 42, 0));

    while (q--) {
        int a, b, d;
        cin >> a >> b >> d;

        a--;
        b--;

        c[a][b] = 1;

        // if(a-1 > 0 && b -1 > 0) {

        //     if (c[a-1][b-1] == 1 && c[a-1][b] && )
        //     {
        //         /* code */
        //     }
            

        // }


        time[a][b] = d;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}