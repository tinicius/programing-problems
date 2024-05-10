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

  ll a, b;
  cin >> a >> b;

  if (a < b) swap(a, b);

  if (a == b) {
    cout << 0 << endl;
    return 0;
  }

  map<ll, ll> a1;
  map<ll, ll> b1;
  map<ll, ll> c1;

  map<ll, ll> a2;
  map<ll, ll> b2;
  map<ll, ll> c2;

  while (a % 2 == 0) {
    a /= 2;
    a1[2]++;
  }

  return 0;
}