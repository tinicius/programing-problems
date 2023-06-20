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

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string ans = "";

        char c = s[0];

        int i = 1;

        while (i < n) {
            if (s[i] == c) {
                ans += c;

                c = s[i + 1];

                i++;
            }

            i++;
        }


        cout << ans << endl;
    }

    return 0;
}
