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

  int m, n, k;
  cin >> m >> n >> k;

  vector<vector<char>> mapa(m, vector<char>(n));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> mapa[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    string line;

    for (int j = 0; j < n; j++) {
      for (int l = 0; l < k; l++) line += mapa[i][j];
    }

    for (int l = 0; l < k; l++) {
      cout << line;
      cout << endl;
    }
  }

  return 0;
}