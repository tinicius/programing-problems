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

int main() {
  _;

  ll x;
  cin >> x;

  ll n = 1e7;

  vector<bool> is_prime(n + 1, true);

  is_prime[0] = is_prime[1] = false;

  for (ll i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
      for (ll j = i * i; j <= n; j += i) is_prime[j] = false;
    }
  }

  vector<ll> ans;

  for (ll i = 0; i <= 1e7; i++) {
    if (is_prime[i]) ans.push_back(i);

    if (ans.size() == x) break;
  }

  for (auto i : ans) cout << i << " ";
  cout << endl;

  return 0;
}