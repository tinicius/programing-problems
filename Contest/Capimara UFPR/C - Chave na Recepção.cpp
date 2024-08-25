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

  ll n;
  cin >> n;

  vector<ll> a(n);
  for (auto& ai : a) cin >> ai;

  vector<bool> aux(366, true);

  for (ll i = 1; i <= 365; i++) {
    ll div = 0;

    for (auto ai : a) {
      if (i % ai == 0) div++;
    }

    if (div != 1) aux[i] = false;
  }

  set<ll> values;

  for (ll i = 0; i < pow(2, n); i++) {
    ll m = 1;

    bool bigger = false;

    ll d = 0;

    for (ll k = 0; k < n; k++) {
      if ((1 & (1 << k)) != 0) {
        m *= a[k];
        d++;

        if (m > 365) {
          bigger = false;
        }
      }
    }

    if (!bigger and d > 1) values.insert(m);
  }

  for (ll i = 1; i <= 365; i++) {
    for (auto v : values) {
      if (i % v == 0) aux[i] = false;
    }
  }

  for (ll i = 1; i <= 365; i++) {
    if (aux[i]) cout << i << endl;
  }
};
