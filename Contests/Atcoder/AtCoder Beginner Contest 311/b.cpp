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

    int n, d;
    cin >> n >> d;

    vector<int> f(d, 0);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        for (int j = 0; j < s.size(); j++) {
            if (s[j] == 'o') f[j]++;
            // if (s[j] == 'x') f[j] = 0;
        }
    }

    int aux = 0;
    int ans = 0;

    for (int i = 0; i < d; i++) {
        // cout << f[i];
        if (f[i] == n)
            aux++;
        else {
            ans = max(ans, aux);
            aux = 0;
        }
    }

    ans = max(ans, aux);

    cout << ans << endl;
}
