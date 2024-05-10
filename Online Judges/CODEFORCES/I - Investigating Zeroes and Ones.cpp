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

  ll n;
  cin >> n;

  vector<ll> b(n);
  for (auto& bi : b) cin >> bi;

  vector<ll> par(n);
  vector<ll> imp(n);

  if (b[n - 1] == 0)
    par[n - 1]++;
  else
    imp[n - 1]++;

  for (ll i = n - 2; i >= 0; i--) {
    if (b[i] == 0) {
      par[i] = par[i + 1] + 1;
      imp[i] = imp[i + 1];
    } else {
      par[i] = imp[i + 1];
      imp[i] = par[i + 1] + 1;
    }

    // dbg(par[i]);
    // dbg(imp[i]);
    // cout << endl;
  }

  ll ans = 0;

  for (ll i = 0; i < n; i++) {
    ans += imp[i];
  }

  cout << ans << endl;

  return 0;
};