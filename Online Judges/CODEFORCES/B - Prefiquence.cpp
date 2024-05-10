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

ll n, m;
string a, b;

bool check(ll k) {
  ll aux = 0;

  for (ll i = 0; i < m; i++) {
    if (b[i] == a[aux]) {
      aux++;
      if (aux == k) break;
    }
  }

  return aux >= k;
}

int main() {
  _;

  ll t;
  cin >> t;

  while (t--) {
    cin >> n >> m;

    cin >> a >> b;

    ll l = 0;
    ll r = a.size() + 1;

    while (l + 1 < r) {
      ll mi = (l + r) / 2;

      if (check(mi)) {
        l = mi;
      } else {
        r = mi;
      }
    }

    cout << l << endl;
  }

  return 0;
}