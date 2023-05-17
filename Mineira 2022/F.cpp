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
    int n, c;
    cin >> n >> c;

    vector<map<char, int>> d(c);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        for (int j = 0; j < c; j++) {
            if (s[j] != '*') {
                d[j][s[j]]++;
            }
        }
    }

    for (auto k : d) {
        int maxi = 0;
        char letra = ' ';

        for (auto l : k) {
            if (l.second > maxi) {
                maxi = l.second;
                letra = l.first;
            }

            if (l.second == maxi) {
                letra = max(letra, l.first);
            }

            // cout << l.first << " " << l.second << endl
        };

        cout << letra;
    }

    return 0;
}