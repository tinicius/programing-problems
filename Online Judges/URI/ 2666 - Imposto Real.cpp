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

const ll MAX = 1e4 + 10;

ll n, c;

vector<vector<pair<ll, ll>>> adj(MAX);

vector<ll> dist(MAX);

vector<ll> taxes(MAX);

vector<ll> e(MAX);

int dfs(int u, int parent) {
  int ans = 0;

  taxes[u] += e[u];

  int d = 0;

  for (auto [v, w] : adj[u]) {
    if (v == parent) {
      d = w;
      continue;
    }

    ans += dfs(v, u);

    taxes[u] += taxes[v];
  }

  if (parent != -1) {
    ll viagens = (taxes[u] + c - 1) / c;
    ll idaevolta = d * 2;

    ans += viagens * idaevolta;
  }

  return ans;
}

int main() {
  _;

  cin >> n >> c;

  for (int i = 0; i < n; i++) cin >> e[i];

  for (ll i = 0; i < n - 1; i++) {
    ll a, b, w;
    cin >> a >> b >> w;

    a--;
    b--;

    adj[a].push_back({b, w});
    adj[b].push_back({a, w});
  }

  cout << dfs(0, -1) << endl;

  return 0;
};