#include <bits/stdc++.h>

#include <fstream>
using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const ll MAX = (2 * 1e5) + 10;

vector<ll> d(MAX + 10);
vector<vector<pair<ll, ll>>> g(MAX + 10,
                               vector<pair<ll, ll>>()); // {vizinho, peso}

ll n;

void dijkstra(ll v) {
  for (ll i = 0; i < n; i++)
    d[i] = LINF;
  d[v] = 0;
  priority_queue<pair<ll, ll>> pq;
  pq.emplace(0, v);

  while (pq.size()) {
    auto [ndist, u] = pq.top();
    pq.pop();
    if (-ndist > d[u])
      continue;

    for (auto [idx, w] : g[u])
      if (d[idx] > d[u] + w) {
        d[idx] = d[u] + w;
        pq.emplace(-d[idx], idx);
      }
  }
}

int main() {
  _;

  // ll n;
  cin >> n;

  vector<ll> a(n - 1);
  vector<ll> b(n - 1);
  vector<ll> x(n - 1);

  for (int i = 0; i < n - 1; i++) {
    cin >> a[i] >> b[i] >> x[i];

    g[i].push_back({i + 1, a[i]});
    g[i].push_back({x[i] - 1, b[i]});
  }

  dijkstra(0);

  cout << d[n - 1] << endl;
}