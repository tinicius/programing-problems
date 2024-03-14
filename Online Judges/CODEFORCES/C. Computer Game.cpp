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

bool test(ll k, ll n, ll a, ll b, ll m) {
  if (m > n) return false;

  k -= a * m;
  k -= b * (n - m);

  // dbg(m);
  // dbg(k);

  if (k <= 0) return false;

  return true;
}

int main() {
  _;

  ll q;
  cin >> q;

  while (q--) {
    ll k, n, a, b;
    cin >> k >> n >> a >> b;

    ll l = 0;
    ll r = n;

    while (l + 1 < r) {
      ll m = (l + r) / 2;

      // cout << l << " " << r << endl;

      if (test(k, n, a, b, m)) {
        l = m;
      } else {
        r = m;
      }
    }

    if(k - (b * n) <= 0) {
      cout << -1 << endl;
      continue;
    }

    if (test(k, n, a, b, r))
      cout << r << endl;
    else
      cout << l << endl;
  } 

  return 0;
}