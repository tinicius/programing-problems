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

  vector<int> a(n);
  for (auto& ai : a) cin >> ai;

  int x = 0;
  int y = 0;

  for (auto ai : a) {
    if (ai == 100)
      x++;
    else
      y++;
  }

  for (int i = 0; i <= x; i++) {
    for (int j = 0; j <= y; j++) {
      int u = (100 * i) + (200 * j);
      int v = (100 * (x - i)) + (200 * (y - j));

      if (u == v) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;

  return 0;
}