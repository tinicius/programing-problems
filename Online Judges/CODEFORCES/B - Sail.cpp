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

  ll t, sx, sy, ex, ey;
  cin >> t >> sx >> sy >> ex >> ey;

  string s;
  cin >> s;

  if (sx == ex and sy == ey) {
    cout << 0 << endl;
    return 0;
  }

  ll aux = 0;

  for (auto c : s) {
    aux++;

    if (c == 'E' and sx < ex) sx++;
    if (c == 'S' and sy > ey) sy--;
    if (c == 'W' and sx > ex) sx--;
    if (c == 'N' and sy < ey) sy++;

    // cout << sx << endl;

    if (sx == ex and sy == ey) {
      cout << aux << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}