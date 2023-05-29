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

    map<char, int> iniciais;

    for (char i = 'A'; i <= 'Z'; i++) iniciais[i] = 0;

    vector<string> ps(n);
    for (int i = 0; i < n; i++) cin >> ps[i];

    for (int i = 0; i < n; i++) iniciais[ps[i][0]]++;

    for (int i = 0; i < n; i++) {
        string p = ps[i];

        bool ok = true;

        for (int j = 0; j < p.size(); j++) {
            if (iniciais[p[j]] == 0) ok = false;
        }

        if (ok) {
            cout << "Y" << endl;
            return 0;
        }
    }

    cout << "N" << endl;

    return 0;
}