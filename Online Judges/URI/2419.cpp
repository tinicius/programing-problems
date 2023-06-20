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

vector<vector<char>> mapa(1010, vector<char>(1010));
vector<vector<bool>> vis(1010, vector<bool>(1010, 0));

ll bfs(ll i, ll j, ll n, ll m) {
    if (vis[i][j]) return 0;

    ll ans = 0;

    if (i >= 0 and j >= 0 and i < n and j < m) {
        if (mapa[i][j] == '#') {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1) {
                mapa[i][j] = 'x';
                vis[i][j] = 1;
                return 1;
        
            } else {
                return 0;
            }
        }
    }

    vis[i][j] = 1;

    queue<pair<ll, ll>> q;
    q.push({i, j});

    vector<pair<ll, ll>> moves = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

    while (!q.empty()) {
        pair<ll, ll> f = q.front();

        for (auto k : moves) {
            ll l = f.first + k.first;
            ll c = f.second + k.second;

            if (l >= 0 and c >= 0 and l < n and c < m) {
                if (vis[l][c]) continue;
                vis[l][c] = 1;
                if (mapa[l][c] == '#') {
                    mapa[l][c] = 'x';
                    ans++;
                } else
                    q.push({l, c});
            }
        }
        q.pop();
    };

    return ans;
};

int main() {
    _;

    ll n, m;
    cin >> n >> m;

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> mapa[i][j];
        };
    };

    

    ll ans = 0;

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            ans += bfs(i, j, n, m);
        };
    };

    cout << ans << endl;
}