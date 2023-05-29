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

    // 1 3 5 3 9
    // 2 5 11 2 4

    // 1 3 3 5 9
    // 2 2 4 5 11

    //
    //

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<pair<int, int>> ai;
        for (int i = 0; i < n; i++) {
            ai.push_back({a[i], i});
        }

        vector<pair<int, int>> bi;
        for (int i = 0; i < n; i++) {
            bi.push_back({b[i], i});
        }

        sort(ai.begin(), ai.end());
        sort(bi.begin(), bi.end());

        map<int, int> juntar;

        for (int i = 0; i < n; i++) {
            juntar[ai[i].second] = bi[i].first;
        }

        for (int i = 0; i < n; i++) {
            cout << juntar[i] << " ";
        }
        cout << endl;
    }

    return 0;
}