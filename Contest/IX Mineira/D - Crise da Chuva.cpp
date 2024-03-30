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

int n, m, k, q;

int solve(vector<vector<int>>& mapa, int u, int v) {
  int maior = 0;

  for (int i = 0; i < k; i++) {
    for (int j = 0; j < k; j++) {
      if (u + i >= n || u + i < 0 || v + j >= m || v + j < 0) return 0;
      if (mapa[u + i][v + j] == 0) return 0;
      maior = max(maior, mapa[u + i][v + j]);
    }
  }

  return maior;
};

int main() {
  _;

  cin >> n >> m >> k >> q;

  vector<vector<int>> mapa(n, vector<int>(m));

  while (q--) {
    int a, b, d;
    cin >> a >> b >> d;

    a--;
    b--;

    mapa[a][b] = d;
  }

  int ans = INF;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int s = solve(mapa, i, j);
      if (s != 0) ans = min(ans, solve(mapa, i, j));
    }
  }

  if (ans == INF)
    cout << -1 << endl;
  else
    cout << ans << endl;

  return 0;
}