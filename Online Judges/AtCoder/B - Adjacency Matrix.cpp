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

  int n;
  cin >> n;

  vector<vector<int>> g(n + 1);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      int a;
      cin >> a;

      if (a == 1) g[i].push_back(j);
    }
  }

  for (int i = 1; i <= n; i++) {
    sort(g[i].begin(), g[i].end());

    for (auto j : g[i]) cout << j << " ";
    cout << endl;
  }

  return 0;
}