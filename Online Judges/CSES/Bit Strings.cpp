#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long int ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
  _;

  ll n;
  cin >> n;

  ll p = 1;
  ll mod = pow(10, 9) + 7;

  for (ll i = 0; i < n; i++) {
    p = (p * 2) % mod;
  }

  cout << p << endl;

  return 0;
}