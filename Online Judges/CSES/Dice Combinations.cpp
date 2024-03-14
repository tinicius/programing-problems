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

unordered_map<ll, ll> dp;

ll dice(ll n) {
  if (n <= 0) return 0;
  if (n == 1) return 1;

  auto& p = dp[n];

  if (p) return p;

  ll aux = 0;

  for (ll i = 1; i <= 6; i++) aux += dice(n - i) % ((ll)1e9 + 7);

  if (n <= 6) return p = (aux + 1) % ((ll)1e9 + 7);
  return p = aux % ((ll)1e9 + 7);
}

int main() {
  _;

  ll n;
  cin >> n;

  cout << dice(n) << endl;

  return 0;
}