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

#define MAX 10

ll d[MAX];
vector<pair<int, int>> g[MAX]; // {vizinho, peso}

int n;

void dijkstra(int v) {
  for (int i = 0; i < n; i++)
    d[i] = LINF;
  d[v] = 0;
  priority_queue<pair<ll, int>> pq;
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

int main() { _; }