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

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        v.push_back({a, b});
    }

    sort(v.begin(), v.end(), cmp);

    int ans = 0;

    int fim = -1;

    for (auto k : v) {
        if (k.first > fim) {
            ans++;
            fim = k.second;
        }

        // cout << k.first << " " << k.second << endl;
    }

    cout << ans << endl;

    return 0;
}
