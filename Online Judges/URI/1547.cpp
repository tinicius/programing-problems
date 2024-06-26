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
    int n, s;
    cin >> n >> s;

    int aux = INF;
    int ans;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;

      if (abs(s - a) < aux) {
        aux = abs(s - a);
        ans = i;
      }
    }

    cout << ans + 1 << endl;
  }

  return 0;
};
