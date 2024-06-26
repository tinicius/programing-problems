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

  ll ans = 0;

  for (ll i = 1; i < n; i++) {
    if (a[i] < a[i - 1]) {
      ans += a[i - 1] - a[i];
      a[i] = a[i - 1];
    }
  }

  cout << ans << endl;

  return 0;
}