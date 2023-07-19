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

    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    map<ll, ll> dp;

    // for (auto i : a) dp[i] = max(dp[i - 1] + 1, dp[i]);
    for (auto i : a) dp[i] = dp[i - 1] + 1;

    ll m = 0;
    ll aux = 0;

    for (auto i : dp) {
        if (i.second > aux) {
            aux = i.second;
            m = i.first;
        }
    }

    vector<int> ans;
    cout << dp[m] << endl;

    for (ll i = n - 1; i >= 0; i--) {
        if (a[i] == m) {
            ans.push_back(i+1);
            m--;
        }
    }

    reverse(ans.begin(), ans.end());

    for (auto i : ans) cout << i << " ";

    cout << endl;
}
