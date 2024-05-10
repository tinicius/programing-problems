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

  ll ans = 0;

   for (ll a = 1; pow(a, 3) <= n; a++) {
    for (ll b = a; pow(b, 2) <= n / a; b++) {
      ans += ((n / (a * b)) - b) + 1;

      // for (ll c = b; c <= n / (a * b); c++) {
      //   ans++;
      // }
    }
  }

  cout << ans << endl;

  return 0;
}