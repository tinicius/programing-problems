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
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (auto& a_i : a) cin >> a_i;

    // for (auto i : a) cout << i << " ";
    //   cout << endl;

    ll d = k / 2;
    ll e = k / 2;

    if (k % 2 != 0) d++;

    for (ll i = 0; i < n; i++) {
      if (a[i] <= d) {
        d -= a[i];
        a[i] = -1;
      } else {
        a[i] -= d;
        break;
      }
    }

  
    for (ll i = n - 1; i >= 0; i--) {
      if (a[i] <= e) {
        e -= a[i];
        a[i] = -1;
      } else {
        a[i] -= e;
        break;
      }
    }

    ll ans = 0;

    for (ll i = n - 1; i >= 0; i--) {
      if (a[i] <= 0) ans++;
    }

    cout << ans << endl;
  }

  return 0;
}