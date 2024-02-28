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

// Recursive function to return gcd of a and b
long long gcd(long long int a, long long int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b) { return (a / gcd(a, b)) * b; }

map<ll, ll> memo;

ll divide(ll n) {

  if (n < 2)
    return 0;

  auto &p = memo[n];

  if (p != 0)
    return p;

  return p = divide(n / 2) + divide((n + 1) / 2) + n;
}

int main() {
  _;

  ll n;
  cin >> n;

  cout << divide(n) << endl;
}