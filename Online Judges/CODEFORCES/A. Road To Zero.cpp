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
  _;

  ll t;
  cin >> t;

  while (t--) {

    ll x, y, a, b;
    cin >> x >> y >> a >> b;

    ll ai = 0;
    ll bi = 0;

    if (a + a <= b) {
      ai = x + y;
      bi = 0;
    } else {
      ai = abs(x - y);
      bi = max(x, y) - abs(x - y);
    }

    cout << (b * bi) + (a * ai) << endl;
  }

  return 0;
}