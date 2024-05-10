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

  ll n, k;
  cin >> n >> k;

  k--;

  vector<ll> a(n);
  for (auto& ai : a) cin >> ai;

  set<ll> aux1;

  for (ll i = 0; i < n; i++) {
    aux1.insert(a[i]);
  }

  if (aux1.size() == 1) {
    cout << "0" << endl;
    return 0;
  }

  set<ll> aux;

  for (ll i = k; i < n; i++) {
    aux.insert(a[i]);
  }

  if (aux.size() == 1) {
    ll ans = 0;

    for (ll i = 0; i < k; i++) {
      if (a[i] != a[k]) ans = max(ans, i);
    }

    cout << ans + 1 << endl;

  } else {
    cout << -1 << endl;
  }

  return 0;
}