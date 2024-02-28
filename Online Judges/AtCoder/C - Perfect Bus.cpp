#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
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

  ll aux = 0;

  ll ans = 0;

  vector<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];

    aux += a[i];

    ans = max(ans, aux * (-1));
  }

  for (auto i : a) {
    ans += i;
  }

  cout << ans << endl;

  return 0;
}