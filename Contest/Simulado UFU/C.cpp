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

ll n, k;

bool check(vector<ll>& a, vector<ll>& c, ll m) {
  ll aux = 0;

  for (ll i = 0; i < n; i++) {
    ll sum = a[i] + c[i];
    aux += (m * sum);
  }

  return aux <= k;
}

int main() {
  _;

  cin >> n >> k;

  vector<ll> a(n);
  vector<ll> c(n);

  for (auto& a_i : a) cin >> a_i;
  for (auto& c_i : c) cin >> c_i;

  ll l = 0;
  ll r = 1e9;

  while (l + 1 < r) {
    ll m = (l + r) / 2;

    if (check(a, c, m)) {
      l = m;
    } else {
      r = m;
    }
  }

  cout << l << endl;

  return 0;
}