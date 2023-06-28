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

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> dir(n);
    dir[0] = 1;

    for (int i = 1; i < n; i++) dir[i] = min(dir[i - 1] + 1, a[i]);

    vector<int> esq(n);
    esq[n - 1] = 1;

    for (int i = n - 2; i >= 0; i--) esq[i] = min(esq[i + 1] + 1, a[i]);

    int ans = 0;

    for (int i = 0; i < n; i++) ans = max(ans, min(dir[i], esq[i]));

    cout << ans << endl;
}