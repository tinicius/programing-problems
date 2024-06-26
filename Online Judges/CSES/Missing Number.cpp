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

  vector<ll> a(n - 1);
  for (auto& a_i : a) cin >> a_i;

  sort(a.begin(), a.end());

  for (ll i = 0; i < n; i++) {
    if (i + 1 != a[i]) {
      cout << i + 1 << endl;
      break;
    }
  }

  return 0;
}