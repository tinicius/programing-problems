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
    
    // 1 1 1 1 1
    // 3 1 1

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 2 || n == 3 || n == 4)
            cout << "Bob " << endl;
        else
            cout << "Alice" << endl;
    }

    return 0;
}
