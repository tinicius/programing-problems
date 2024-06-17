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

  ll n, a;
  cin >> n >> a;

  vector<ll> t(n);
  for (auto& ti : t) cin >> ti;

  ll aux = 0;
  ll ans = 0;

  for (auto ti : t) {
    if (aux < ti) {
      ans += (ti - aux);
      aux = ti;
    }

    ans += a;
    aux += a;

    cout << ans << endl;
  }
};