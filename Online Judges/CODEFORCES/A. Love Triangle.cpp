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

const ll MAX = 6000 + 1;

vector<ll> like(MAX);
vector<bool> vis(MAX);

bool dfs(ll start, ll i, ll steps) {
    if (!vis[i]) {
        vis[i] = true;
        return dfs(start, like[i], steps + 1);
    }

    else {
        if (steps == 3 && start == i)
            return true;
        else
            return false;
    }
}

int main() {
    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++) {
        ll l;
        cin >> l;

        like[i] = l - 1;
    }

    for (ll i = 0; i < n; i++) {
        int s = like[i];
        int t = like[s];

        if (like[t] == i) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}