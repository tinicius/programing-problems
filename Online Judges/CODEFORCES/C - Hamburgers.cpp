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

  string rec;
  cin >> rec;

  vector<ll> aux(3);

  for (auto c : rec) {
    if (c == 'B') aux[0]++;
    if (c == 'S') aux[1]++;
    if (c == 'C') aux[2]++;
  }

  ll nb, ns, nc;
  cin >> nb >> ns >> nc;

  ll pb, ps, pc;
  cin >> pb >> ps >> pc;

  ll rub;
  cin >> rub;

  ll l = 0;
  ll r = 1e13;

  while (l + 1 < r) {
    ll m = (l + r) / 2;

    ll b = max((aux[0] * m) - nb, (ll)0);
    ll s = (aux[1] * m) > ns ? (aux[1] * m) - ns : 0;
    ll c = (aux[2] * m) > nc ? (aux[2] * m) - nc : 0;

    ll val = b * pb + s * ps + c * pc;

    // dbg(m);
    // dbg(b);
    // dbg(s);
    // dbg(c);

    // dbg(val);

    if (val <= rub) {
      l = m;
    } else {
      r = m;
    }
  }

  cout << l << endl;

  return 0;
}