#include <bits/stdc++.h>
#include <math.h>

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

    string pi = "3141592653589793238462643383279502884";

    int t;
    cin >> t;

    while (t--) {
        string pol;
        cin >> pol;

        int aux = 0;

        for (int i = 0; i < pol.size(); i++) {
            if (pol[i] == pi[i]) aux++;
        }

        cout << aux << endl;
    }

    return 0;
}