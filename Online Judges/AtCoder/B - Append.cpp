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

vector<ll> memo(1e6 + 10, 2);

bool is_prime(ll a) {

  if (a == 1 || a == 2)
    return true;

  if (a % 2 == 0)
    return false;

  for (int i = 3; i * i <= a; i++) {
    if (a % i == 0)
      return false;
  }

  return true;
}

int main() {
  _;

  ll q;
  cin >> q;

  vector<ll> aux;

  while (q--) {

    ll a, b;
    cin >> a >> b;

    if (a == 1) {
      aux.push_back(b);
    } else {
      cout << aux[aux.size() - b] << endl;
    }
  }
}