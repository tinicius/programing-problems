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

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (auto& ai : a) cin >> ai;
    for (auto& bi : b) cin >> bi;

    vector<pair<int, int>> ans;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == j) continue;

        while (a[i] > b[i] and a[j] < b[j]) {
          a[i]--;
          a[j]++;

          ans.push_back({i + 1, j + 1});
        }
      }
    }

    bool equal = true;

    for (int i = 0; i < n; i++)
      if (a[i] != b[i]) equal = false;

    if (!equal) {
      cout << -1 << endl;
      continue;
    }

    cout << ans.size() << endl;
    for (auto [x, y] : ans) cout << x << " " << y << endl;
  }

  return 0;
};