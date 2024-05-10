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
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (auto& ai : a) cin >> ai;

    for (ll i = 1; i < n - 1; i++) {
      ll x = a[i - 1] / 1;
      ll y = a[i] / 2;
      ll z = a[i + 1] / 1;

      ll op = min({x, y, z});

      a[i - 1] -= 1 * op;
      a[i] -= 2 * op;
      a[i + 1] -= 1 * op;
    }

    bool valid = true;

    for (auto ai : a) {
      if (ai != 0) {
        valid = false;
      }
    }

    if (valid)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}