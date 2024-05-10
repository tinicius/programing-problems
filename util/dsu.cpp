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

vector<int> id, sz;

int find(int x) { return id[x] = (id[x] == x ? x : find(id[x])); }

void uni(int x, int y) {
  int p = find(x), q = find(y);
  if (p == q) return;
  if (p > q) swap(p, q);
  id[p] = q;
  sz[q] += sz[p];
};

int main() {
  _;

  int n, m;
  cin >> n >> m;

  id = vector<int>(n);
  sz = vector<int>(n, 1);

  iota(id.begin(), id.end(), 0);

  while (m--) {
    string s;
    cin >> s;

    int u, v;
    cin >> u >> v;

    u--;
    v--;

    if (s == "union") {
      uni(u, v);
    } else {
      cout << (find(u) == find(v) ? "YES" : "NO") << endl;
    }
  }

  return 0;
}