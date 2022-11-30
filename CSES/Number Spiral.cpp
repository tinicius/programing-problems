#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solve() {
  ll y, x;
  cin >> y >> x;

  if (y >= x) {

    if (y % 2 == 0) {
      // 4 2
      cout << (y - 1) * (y - 1) + y + (y - x) << endl;
      return;

    } else {
      // 5 2
      cout << (y - 1) * (y - 1) + x << endl;
      return;
    }

  } else {

    if (x % 2 == 0) {
      // 2 4
      cout << (x - 1) * (x - 1) + y << endl;
      return;
    } else {
      // 2 3
      cout << (x - 1) * (x - 1) + x + (x - y) << endl;
      return;
    }
  }
}

int main() {
  _;

  ll t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}