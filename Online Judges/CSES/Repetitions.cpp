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

  string s;
  cin >> s;

  ll aux = 1;

  ll ans = 0;

  for (ll i = 1; i < s.size(); i++) {
    if (s[i] == s[i - 1]) {
      aux++;
    } else {
      ans = max(ans, aux);
      aux = 1;
    }
  }

  ans = max(ans, aux);

  cout << ans << endl;

  return 0;
}