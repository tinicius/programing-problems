#include <bits/stdc++.h>

#include <fstream>
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

    int t;
    cin >> t;

    while (t--) {
        string p;
        cin >> p;

        bool ans = false;

        string res = "abc";

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                string aux = p;
                swap(aux[i], aux[j]);

                if (aux == res) ans = true;
            }
        }

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
