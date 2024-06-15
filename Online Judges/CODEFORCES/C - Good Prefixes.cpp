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

bool test(vector<ll>& x, ll sum) {
  if (x.size() == 1 and x[0] == 0) return true;

  for (int i = x.size() - 1; i >= 0; i--) {
    if (sum - x[i] == x[i]) return true;
  }

  return false;
}

int main() {
  _;

  ll t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (auto& ai : a) cin >> ai;

    vector<ll> x;

    ll ans = 0;

    ll sum = 0;
    ll bigger = 0;

    for (ll i = 0; i < n; i++) {
      x.push_back(a[i]);

      sum += a[i];
      bigger = max(bigger, a[i]);

      if (sum - bigger == bigger) ans++;
    }

    cout << ans << endl;
  }
};