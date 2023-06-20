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

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int i = 0;
    int j = 0;

    while (j < m) {
        while (i < n) {
            if (a[i] >= b[j]) break;

            i++;
        }

        cout << i << " ";

        j++;
    }

    return 0;
}
