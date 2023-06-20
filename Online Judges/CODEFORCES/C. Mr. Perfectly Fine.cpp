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

bool cmp(pair<int, string> l, pair<int, string> r) { return l.first < r.first; }

int main() {
    _;

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, string>> h1;
        vector<pair<int, string>> h2;

        vector<pair<int, string>> all;

        for (int i = 0; i < n; i++) {
            int m;
            string s;

            cin >> m;
            cin >> s;

            if (s[0] == '1') h1.push_back({m, s});

            if (s[1] == '1') h2.push_back({m, s});

            if (s[1] == '1' && s[0] == '1') all.push_back({m, s});
        }

        sort(h1.begin(), h1.end(), cmp);
        sort(h2.begin(), h2.end(), cmp);
        sort(all.begin(), all.end(), cmp);

        int ans = 0;

        if (h1.size() == 0 || h2.size() == 0) {
            cout << "-1" << endl;
            continue;
        }

        if (all.size() > 0) ans = all[0].first;

        if (ans != 0)
            cout << min(ans, h1[0].first + h2[0].first) << endl;
        else
            cout << h1[0].first + h2[0].first << endl;

        // for (auto i : h1) cout << i.first << " " << i.second << endl;
        // cout << endl;
    }

    return 0;
}
