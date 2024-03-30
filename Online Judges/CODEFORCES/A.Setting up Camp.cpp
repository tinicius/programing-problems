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

  ll t;
  cin >> t;

  while (t--) {
    ll a, b, c;
    cin >> a >> b >> c;

    if (b % 3 == 0) {
      cout << a + (b + 2) / 3 + (c + 2) / 3 << endl;
    } else {
      ll aux = 3 - (b % 3);
      b += aux;
      c -= aux;

      if (c < 0) {
        cout << -1 << endl;
        continue;
      }

      // dbg(a);
      // dbg(b);
      // dbg(c);

      cout << a + (b + 2) / 3 + (c + 2) / 3 << endl;
    }
  }

  return 0;
}