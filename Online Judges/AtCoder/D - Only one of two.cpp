#include <bits/stdc++.h>

#include <fstream>
using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll check(ll a, ll b, ll m) { return (m / a) + (m / b) - (2 * (m / lcm(a, b))); }

int main() {
  _;

  ll n, m, k;
  cin >> n >> m >> k;

  ll l = 0;
  ll r = 2 * 1e18;

  while (r > l + 1) {

    ll mid = (l + r) / 2;

    if (check(n, m, mid) >= k) {
      r = mid;
    } else {
      l = mid;
    }
  }

  cout << r << endl;
}