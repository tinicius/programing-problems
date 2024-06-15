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

  ll n, m;
  cin >> n >> m;

  vector<ll> a(m);
  for (auto& ai : a) cin >> ai;

  vector<vector<ll>> x(n, vector<ll>(m));

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < m; j++) {
      cin >> x[i][j];
    }
  }

  vector<ll> nut(m);

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < m; j++) {
      nut[j] += x[i][j];
    }
  }

  for (ll i = 0; i < m; i++) {
    if (nut[i] < a[i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
};