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

  ll mn = LINF;
  ll ma = 0;

  vector<pair<ll, ll>> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;

    mn = min(a[i].first, mn);
    ma = max(a[i].second, ma);
  }

  for (int i = 0; i < n; i++) {
    auto [x, y] = a[i];

    if (x == mn and y == ma) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}