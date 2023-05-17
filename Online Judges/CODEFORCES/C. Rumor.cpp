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

const int MAX = 1e5 + 42;

vector<ll> coast(MAX);
vector<vector<ll>> friends(MAX);
vector<bool> visited(MAX);

ll gold = 0;

ll dfs(ll i) {
    ll mn = coast[i];

    if (!visited[i]) {
        visited[i] = true;
        for (auto k : friends[i]) mn = min(mn, dfs(k));
    }

    return mn;
}

int main() {
    ll n, m;
    cin >> n >> m;

    for (ll i = 0; i < n; i++) {
        cin >> coast[i];
        visited[i] = false;
    };

    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;

        friends[a - 1].push_back(b - 1);
        friends[b - 1].push_back(a - 1);
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) gold += dfs(i);
    }

    cout << gold << endl;

    return 0;
}