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

    int a, b;
    cin >> a >> b;

    if (abs(a - b) == 1) {
        cout << "Yes" << endl;
    } else if ((a == 10 && b == 1) || (a == 1 && b == 10)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
