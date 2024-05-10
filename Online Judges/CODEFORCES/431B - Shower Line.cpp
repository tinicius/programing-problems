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

  vector<vector<int>> g(5, vector<int>(5));

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> g[i][j];
    }
  }

  // for (int i = 0; i < 5; i++) {
  //   for (int j = 0; j < 5; j++) {
  //     cout << g[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  vector<int> line = {0, 1, 2, 3, 4};

  int ans = 0;

  do {
    // for (int i = 0; i < 5; i++) cout << line[i] << " ";
    // cout << endl;

    int aux = 0;

    for (int i = 0; i < 5; i++) {
      for (int k = i; k < 4; k += 2) {
        int a = line[k];
        int b = line[k + 1];

        // cout << a << " " << b << endl;
        // dbg(g[a][b]);
        // dbg(g[b][a]);

        aux += g[a][b];
        aux += g[b][a];
      }
    }

    ans = max(ans, aux);
  } while (next_permutation(line.begin(), line.end()));

  cout << ans << endl;

  return 0;
}