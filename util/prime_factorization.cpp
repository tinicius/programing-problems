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

vector<ll> primes = {2, 3, 5, 7, 11};

vector<ll> factors(ll x) {
  vector<ll> ret;

  // Need pre compute the primes
  for (ll p : primes) {
    if (p * p > x) {
      if (x > 1) {
        ret.push_back(x);
        x = 1;
      }
    } else {
      while (x % p == 0) {
        ret.push_back(p);
        x /= p;
      }
    }
  }

  return ret;
}

int main() {
  _;

  auto x = factors(10);

  for (auto i : x) cout << i << " ";
  cout << endl;

  return 0;
}