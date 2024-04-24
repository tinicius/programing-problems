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
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;

    while (n > 0) {
      if (2 * a > b) {
        if (n >= 2) {
          n -= 2;
          ans += b;
        } else {
          n -= 1;
          ans += a;
        }
      } else {
        n -= 1;
        ans += a;
      }
    }

    cout << ans << endl;
  }

  return 0;
}