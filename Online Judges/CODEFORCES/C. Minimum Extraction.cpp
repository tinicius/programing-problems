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

ll moedas(ll nivel) { return (nivel * (nivel + 1)) / 2; }

int main() {
  _;

  ll t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (auto& i : a) cin >> i;

    sort(a.begin(), a.end());

    ll aux = 0;

    ll ans = -INF;

    for (ll i = 0; i < n; i++) {
      ans = max(a[i] - aux, ans);
      aux += (a[i] - aux);
    }

    cout << ans << endl;
  }
  return 0;
}