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

#define MAX 1123

int n;

vector<vector<int>> c(MAX, vector<int>(MAX, INF));
vector<vector<int>> d(MAX, vector<int>(MAX, INF));

void floyd() {
  for (int k = 0; k < n; ++k) {
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}

int main() {
  _;

  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> c[i][j];
      d[i][j] = c[i][j];
    }
  }

  floyd();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (c[i][j] != d[i][j]) {
        cout << -1 << endl;
        return 0;
      }
    }
  }

  set<pair<int, int>> ans;

  for (int k = 0; k < n; ++k) {
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        if (d[i][j] == d[i][k] + d[k][j] and i != k and k != j) {
          // cout << i + 1 << " " << k + 1 << " " << j + 1 << endl;
          // cout << i + 1 << " " << j + 1 << endl;
          // cout << endl;

          ans.insert({min(i, j), max(i, j)});
        }

        // d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }

  cout << ans.size() << endl;

  return 0;
}
