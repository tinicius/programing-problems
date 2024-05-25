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

#define MAX 112345

vector<ll> primes;

void sieve(int n) {
  primes.push_back(2);

  for (int i = 3; i <= n; i++) {
    bool is_prime = true;

    for (int j = 0; j < primes.size() && primes[j] <= sqrt(i); j++) {
      is_prime &= i % primes[j] != 0;
    }

    if (is_prime) primes.push_back(i);
  }
}