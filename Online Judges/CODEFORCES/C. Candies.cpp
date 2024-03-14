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

bool test(ll n, ll m) {
  ll old = n;

  ll c = 0;

  ll v = 0;
  ll p = 0;

  while (n > 0) {
    if (c % 2 == 0) {
      if (m > n) {
        v += n;
        n = 0;

        continue;
      }
      n -= m;
      v += m;
    } else {
      if (n < 10) {
        c++;
        continue;
      }
      p += (n / 10);
      n -= (n / 10);
    }

    c++;
  }

  return v >= ((old + 1) / 2);
}

int main() {
  _;

  ll n;
  cin >> n;

  ll l = 0;
  ll r = n;

  while (l + 1 < r) {
    ll m = (l + r) / 2;

    if (!test(n, m)) {
      l = m;
    } else {
      r = m;
    }
  }

  cout << l + 1 << endl;

  return 0;
}