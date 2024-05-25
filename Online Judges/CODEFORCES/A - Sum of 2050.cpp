#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
  _;

  ll t;
  cin >> t;

  // 252150

  while (t--) {
    ll a;
    cin >> a;

    if (a % 2050 != 0) {
      cout << -1 << endl;
      continue;
    }

    ll qnt = a / 2050;

    ll ans = 0;

    while (qnt > 0) {
      ans += qnt % 10;
      qnt /= 10;
    }

    cout << ans << endl;
  }

  return 0;
};