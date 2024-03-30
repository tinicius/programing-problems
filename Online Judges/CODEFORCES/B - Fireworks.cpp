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
    ll a, b, m;
    cin >> a >> b >> m;

    ll mmc = a * b;
    ll limit = mmc + m;

    ll qnt = (limit - mmc) + 1;

    ll fa = (qnt + a - 1) / a;
    ll fb = (qnt + b - 1) / b;

    cout << fa + fb << endl;
  }

  return 0;
}