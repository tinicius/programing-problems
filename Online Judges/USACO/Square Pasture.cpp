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

struct Point {
  ll x;
  ll y;
};

int main() {
  _;

  Point a, b, c, d;
  cin >> a.x >> a.y >> b.x >> b.y;
  cin >> c.x >> c.y >> d.x >> d.y;

  vector<ll> x = {a.x, b.x, c.x, d.x};
  vector<ll> y = {a.y, b.y, c.y, d.y};

  sort(x.begin(), x.end());
  sort(y.begin(), y.end());

  ll h = 0;
  ll w = 0;

  h = x[3] - x[0];
  w = y[3] - y[0];

  cout << pow(max(h, w), 2) << endl;

  return 0;
}