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
    ll n;
    cin >> n;

    vector<int> a(n);
    for (auto& a_i : a) cin >> a_i;

    sort(a.begin(), a.end());

    for (auto& a_i : a) {
      if (a_i > 0) break;
      a_i = (-1) * a_i;
    }

    ll ans = 0;

    for (auto a_i : a) ans += a_i;

    cout << ans << endl;
  }

  return 0;
}