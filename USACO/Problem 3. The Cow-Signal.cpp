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

typedef pair<int, int> pii;

typedef vector<vector<int>> vvi;
typedef vector<vector<bool>> vvb;

bool cmp(pii l, pii r) { return l.second < r.second; }

int main() {
    _;

    ifstream fin("cowsignal.in");
    ofstream fout("cowsignal.out");

    int m, n, k;
    fin >> m >> n >> k;

    vector<vector<char>> ori(m, vector<char>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            fin >> ori[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            for (int l = 0; l < n; l++) {
                for (int o = 0; o < k; o++) {
                    fout << ori[i][l];
                }
            }
            fout << endl;
        }
    }

    return 0;
}
