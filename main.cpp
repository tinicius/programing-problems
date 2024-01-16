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

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    int big = a[0];
    int low = a[0];

    int ans = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > big) {
            ans++;
            big = a[i];
        } else if (a[i] < low) {
            ans++;
            low = a[i];
        }
    }

    cout << ans << endl;
}