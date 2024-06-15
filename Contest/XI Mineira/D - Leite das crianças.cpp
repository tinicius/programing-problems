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

  ll n, l;
  cin >> n >> l;

  vector<ll> x(n);
  for (auto& ai : x) cin >> ai;

  for (auto& xi : x) xi = 100 - xi;

  sort(x.begin(), x.end());

  ll ans = 0;

  for (auto xi : x) {
    if (l >= xi) {
      l -= xi;
      ans++;
    }
  }

  cout << ans << endl;
};