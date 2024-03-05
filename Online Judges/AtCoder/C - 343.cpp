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

  vector<ll> pows;

  for (ll x = 1; x * x * x <= n; x++) {
    ll x_3 = x * x * x;

    pows.push_back(x_3);
  }

  reverse(pows.begin(), pows.end());

  for (auto x_3 : pows) {
    bool h_l = false;

    ll aux = x_3;

    while (aux > 0) {
      if (aux % 10 == 0) {
        h_l = true;
        break;
      } else {
        break;
      }
      aux /= 10;
    }

    if (h_l) continue;

    string s = to_string(x_3);
    string r = s;

    reverse(r.begin(), r.end());

    if (r == s) {
      cout << x_3 << endl;
      return 0;
    }
  }

  return 0;
}