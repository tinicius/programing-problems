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

int dist(pair<int, int> a, pair<int, int> b) {
  return pow(abs(a.first - b.first), 2) + pow(abs(a.second - b.second), 2);
}

int main() {
  _;

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int bx, by;
    cin >> bx >> by;

    vector<pair<int, int>> bolas(n);
    for (auto& [x, y] : bolas) cin >> x >> y;

    int aux = INF;
    int ans;

    for (int i = 0; i < n; i++) {
      if (dist({bx, by}, bolas[i]) < aux) {
        aux = dist({bx, by}, bolas[i]);
        ans = i;
      }
    }

    cout << ans + 1 << endl;
  }

  return 0;
};