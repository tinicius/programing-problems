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

#define MAX 212345

int main() {
  _;

  ll n;
  cin >> n;

  vector<ll> c(n);
  vector<ll> rx(n);

  vector<vector<ll>> enderecos(MAX, vector<ll>());

  for (ll i = 0; i < n; i++) {
    cin >> rx[i] >> c[i];
    enderecos[rx[i]].push_back(c[i]);
  }

  ll ans = 0;

  for (ll r = 1; r < MAX; r++) {
    if (enderecos[r].size() == 0) continue;

    sort(enderecos[r].begin(), enderecos[r].end());

    ll sz = enderecos[r].size();

    ll x;

    if (sz % 2 != 0) {
      x = enderecos[r][sz / 2];
    } else {
      x = (enderecos[r][sz / 2] + enderecos[r][(sz / 2) - 1]) / 2;
    }

    for (auto ci : enderecos[r]) ans += abs(ci - x);
  }

  cout << ans << endl;
};