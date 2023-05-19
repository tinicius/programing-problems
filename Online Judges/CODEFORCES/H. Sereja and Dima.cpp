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

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 0;
    int r = n - 1;

    int s = 0;
    int d = 0;

    for (int i = 0; l <= r; i++) {
        int point = max(a[l], a[r]);

        if (a[r] > a[l])
            r--;
        else
            l++;

        if (i % 2 != 0)
            s += point;
        else
            d += point;
    }

    cout << d << " " << s << endl;

    return 0;
}