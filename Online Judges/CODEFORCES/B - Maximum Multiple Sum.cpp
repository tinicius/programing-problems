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

    int ans;
    int aux = 0;

    for (int x = 2; x <= n; x++) {
      int sum = 0;

      for (int m = x; m <= n; m += x) {
        sum += m;
      }

      if (sum > aux) {
        aux = sum;
        ans = x;
      }
    }

    cout << ans << endl;
  }
};