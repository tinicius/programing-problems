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
    int l;
    cin >> l;

    int n = 0;
    int d = 0;

    for (int i = 0; i < l; i++) {
        char c;
        cin >> c;
        if (c == 'n')
            n++;
        else
            d++;
    }

    for (int i = 0; i < n; i++) {
        cout << "1 ";
    }

    for (int i = 0; i < d; i++) {
        cout << "0 ";
    }

    return 0;
}