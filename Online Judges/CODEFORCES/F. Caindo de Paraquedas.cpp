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

    string s;
    cin >> s;

    int graus = 0;
    int e = 0;
    int d = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'E') {
            graus -= n;
        } else {
            graus += n;
        }

        // cout << graus << endl;

        if (graus < e) e = graus;

        if (graus > d) d = graus;

        if (abs(graus) >= 360) {
            cout << "S" << endl;
            return 0;
        }
    }

    // dbg(e);
    // dbg(d);

    if (abs(e) + abs(d) >= 360)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}