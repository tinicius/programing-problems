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

    long long n;
    cin >> n;

    string s;
    cin >> s;

    if (s[0] == '.') {
        cout << "-1" << endl;
        return 0;
    }

    long long pulos = 0;
    long long carga = 0;

    long long last = 1;

    for (long long i = 0; i < s.size(); i++) {
        if (s[i] == 'x') {
            if (last == -1) {
                carga = 1;
                pulos++;
            } else if (i != 0)
                carga++;

            last = 1;

        } else {
            carga--;

            if (carga < 0) break;
            last = -1;
        }
    }

    if (carga < 0)
        cout << -1 << endl;
    else
        cout << pulos << endl;

    return 0;
}