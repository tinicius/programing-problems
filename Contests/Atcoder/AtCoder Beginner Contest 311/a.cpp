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
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool a = false;
    bool b = false;
    bool c = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') a = true;
        if (s[i] == 'B') b = true;
        if (s[i] == 'C') c = true;

        if (a and b and c) {
            cout << i+1 << endl;
            return 0;
        }
    }
}
