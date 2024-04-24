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

vector<ll> decimals;

bool is_decimal(ll a) {
  while (a > 0) {
    if (a % 10 != 0 and a % 10 != 1) return false;

    a /= 10;
  }
  return true;
}

int aux = 0;

bool check(ll n) {
  // aux++;

  // dbg(n);

  if (aux == 100) return false;
  if (n <= 0) return false;
  if (n == 1) return true;

  // dbg(n);

  for (auto i : decimals) {
    if (i == n) return true;
  }

  for (auto i : decimals) {
    if (n % i == 0) {
      if (check(n / i)) return true;
    }
  }

  return false;
}

int main() {
  _;

  ll t;
  cin >> t;

  for (ll i = 2; i < 1e5 + 10; i++) {
    if (is_decimal(i)) decimals.push_back(i);
  }

  dbg(decimals.size());

  while (t--) {
    ll n;
    cin >> n;

    if (check(n))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}