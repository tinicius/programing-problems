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
    int t;
    cin >> t;

    while (t--) {
        string proibida, brac;
        cin >> proibida >> brac;

        string rev = proibida;
        reverse(rev.begin(), rev.end());

        brac += brac;

        if (brac.find(proibida) != brac.npos || brac.find(rev) != brac.npos)
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}