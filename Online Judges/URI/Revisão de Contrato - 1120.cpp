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

    string d, n;
    cin >> d >> n;

    while (d != "0" && n != "0") {
        // cout << d << " " << n << endl;

        string aux = "";

        for (int i = 0; i < n.size(); i++) {
            if (!(n[i] == d[0])) aux += n[i];
        }

        int fnz = -1;

        for (int i = 0; i < aux.size(); i++) {
            if (aux[i] != '0') {
                fnz = i;
                break;
            }
        }

        if (aux.size() == 0 || fnz == -1)
            cout << "0" << endl;
        else {
            for (int i = fnz; i < aux.size(); i++) {
                cout << aux[i];
            }
            cout << endl;
        }

        

        cin >> d >> n;
    }

    return 0;
}