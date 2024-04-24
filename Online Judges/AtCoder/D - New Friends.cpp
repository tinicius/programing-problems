#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const ll MAX = 2 * 1e5;

vector<vector<ll>> adj(MAX, vector<ll>());

vector<bool> vis(MAX, 0);

pair<ll, ll> dfs(ll u) {
  ll nodes = 0;

  ll aux = 0;
  ll child = 0;

  vis[u] = 1;

  for (auto v : adj[u]) {
    if (vis[v]) continue;
    vis[v] = 1;

    aux++;

    auto [x, y] = dfs(v);

    nodes += x;
    child += y;
  }

  return {nodes + 1, aux + child};
}

int main() {
  _;

  ll n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++)

  {
    ll a, b;
    cin >> a >> b;

    a--;
    b--;

    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  ll total = 0;

  for (ll i = 0; i < n; i++) {
    if (vis[i]) continue;
    auto [x, y] = dfs(i);

    total += (x * (x - 1)) / 2;
  }

  cout << total - m << endl;

  return 0;
}