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

typedef pair<int, int> pii;

bool cmp(pii l, pii r) { return l.second < r.second; }

int main() {
    _;

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = a[0];

    int sum = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > (sum + a[i])) {
            sum = a[i];
        } else {
            sum += a[i];
        }


        ans = max(ans, sum);
    }

    cout << ans << endl;

    return 0;
}
