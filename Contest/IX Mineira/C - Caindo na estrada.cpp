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
  for (auto& a_i : a) cin >> a_i;

  vector<ll> suffix(n + 3);

  ll ans = 0;

  for (ll i = n - 1; i >= 0; i--) {
    suffix[i] = max(suffix[i + 1], a[i] + suffix[i + 2]);
    ans = max(ans, suffix[i]);
  }

  cout << ans << endl;

  return 0;
}