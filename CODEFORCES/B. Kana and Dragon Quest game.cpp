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

int main() {
  _

      int t;
  cin >> t;

  while (t--) {

    int hit, n, m;
    cin >> hit >> n >> m;

    for (int i = 0; i < n; i++) {

      int aux = (hit / 2) + 10;

      if (aux >= hit) {
        break;
      }

      hit = aux;
    }

    for (int i = 0; i < m; i++) {
      hit = hit - 10;
    }

    if (hit <= 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}