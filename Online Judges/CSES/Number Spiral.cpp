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
    ll x, y;
    cin >> x >> y;

    ll maior = max(x, y);

    ll initial = ((maior - 1) * (maior - 1)) + 1;

    if (maior % 2 == 0) {
      ll diff = abs(x - 1) + abs(y - maior);
      cout << initial + diff << endl;
    } else {
      ll diff = abs(x - maior) + abs(y - 1);
      cout << initial + diff << endl;
    }
  }

  return 0;
}