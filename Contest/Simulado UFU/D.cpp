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

int main() {
  _;

  int n, m;
  cin >> n >> m;

  vector<vector<char>> mapa(n, vector<char>(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mapa[i][j];
    }
  }

  string ans;

  for (int i = n - 1; i >= 0; i--) {
    int aux = i;
    int j = 0;

    while (aux < n && aux >= 0 and j < m and j >= 0) {
      ans.push_back(mapa[aux][j]);

      aux++;
      j++;
    }
  }

  //  dbg(ans);

  for (int j = 1; j < m; j++) {
    int l = 0;
    int c = j;

    while (l < n && l >= 0 and c < m and c >= 0) {
      ans.push_back(mapa[l][c]);

      l++;
      c++;
    }

    // dbg(ans);
  }

  cout << ans << endl;

  return 0;
}