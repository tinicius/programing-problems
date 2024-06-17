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

  vector<ll> p(n);
  for (auto& pi : p) cin >> pi;

  ll ans = LINF;

  for (ll i = 0; i < (1 << n); i++) {
    ll a = 0;
    ll b = 0;

    for (ll k = 0; k < n; k++) {
      if ((i & (1 << k)) != 0) {
        a += p[k];
      } else {
        b += p[k];
      }
    }

    ans = min(ans, abs(a - b));
  }

  cout << ans << endl;
};