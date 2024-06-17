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

  ll n, m;
  cin >> n >> m;

  vector<ll> a(n);
  for (auto& ai : a) cin >> ai;

  vector<ll> b(m);
  for (auto& bi : b) cin >> bi;

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  ll f = 0;  // Item M que estou buscando

  ll ans = 0;

  for (auto ai : a) {
    if (f == m) break;

    if (ai >= b[f]) {
      ans += ai;
      f++;
    }
  }

  if (f == m) {
    cout << ans << endl;
  } else {
    cout << -1 << endl;
  }
};