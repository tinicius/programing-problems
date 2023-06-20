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

    if (s == "XOX")
        cout << '*' << endl;
    else if (s == "XXO")
        cout << "Alice" << endl;
    else if (s == "OXX")
        cout << "Alice" << endl;
    else
        cout << '?' << endl;

    return 0;
}
