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
    int n;
    cin >> n;

    set<int> f;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    map<int, int> m;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (m[a[i] + 1] <= 0) {
            ans++;
            m[a[i]]++;
        } else {
            m[a[i] + 1]--;
            m[a[i]]++;
        }
    }

    cout << ans << endl;

    return 0;
}