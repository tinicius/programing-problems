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

    string s;
    cin >> s;

    int k;
    cin >> k;

    map<char, int> peso;

    char maxc;
    int aux = 0;

    for (char i = 'a'; i <= 'z'; i++) {
        int num;
        cin >> num;

        peso[i] = num;

        if (num >= aux) {
            maxc = i;
            aux = num;
        }
    }

    while (k--) s += maxc;

    int ans = 0;

    for (int i = 0; i < s.size(); i++) ans += (i + 1) * peso[s[i]];

    cout << ans << endl;

    return 0;
}