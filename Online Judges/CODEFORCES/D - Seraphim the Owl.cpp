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
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);
    vector<ll> b(n);

    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> b[i];

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    ll ans = LINF;

    ll aux = 0;

    for (ll i = 0; i < n; i++) {
      if (i >= n - m) {
        ans = min(ans, aux + a[i]);
      }

      aux += min(a[i], b[i]);
    }

    cout << ans << endl;
  }

  return 0;
}

