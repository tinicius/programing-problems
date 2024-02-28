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

bool test2(ll n, ll a, ll b) {
  for (ll ap = 1; ap <= n; ap *= a) {
    for (ll bp = 1; ap * bp <= n; bp *= b)
      if (ap * bp == n) {
        dbg(n);

        cout << endl;
        return true;
      }
  }
  return false;
}

ll div(ll n, ll f, ll s) {
  while (n >= f and n % f == 0) {
    n /= f;

    if (div(n, s, f) == 1) return 1;
  }

  return n;
}

bool test(ll n, ll a, ll b) {
  ll aux_1 = div(n, a, b);
  ll aux_2 = div(n, b, a);

  if (aux_1 == 1 || aux_2 == 1) {
    return true;
  }

  return false;
}

ll solve(ll a, ll b, ll l) {
  ll ans = 0;

  for (ll i = 1; i * i <= l; i++) {
    if (l % i == 0 and test(i, a, b)) ans++;
    if (l % i == 0 and (l / i) != i and l % (l / i) == 0 and test(l / i, a, b))
      ans++;
  }

  return ans;
}

ll brute(ll a, ll b, ll l) {
  ll ans = 0;

  for (ll i = 1; i * i <= l; i++) {
    if (l % i == 0 and test2(i, a, b)) ans++;
    if (l % i == 0 and (l / i) != i and l % (l / i) == 0 and test2(l / i, a, b))
      ans++;
  }

  return ans;
}

int main() {
  _;

  ll t;
  cin >> t;

  while (t--) {
    ll a, b, l;
    cin >> a >> b >> l;

    cout << solve(a, b, l) << endl;

    // cout << brute(a, b, l) << endl;
  }

  return 0;
}