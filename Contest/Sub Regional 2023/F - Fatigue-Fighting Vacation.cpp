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

  int d, c, r;
  cin >> d >> c >> r;

  vector<int> cansativas(c);
  vector<int> revigorantes(r);

  for (int i = 0; i < c; i++) {
    cin >> cansativas[i];
  }

  for (int i = 0; i < r; i++) {
    cin >> revigorantes[i];
  }

  for (auto r_i : revigorantes) d += r_i;

  int ans = r;

  for (auto c_i : cansativas) {
    if (d >= c_i) {
      ans++;
      d -= c_i;
    } else {
      break;
    }
  }

  cout << ans << endl;

  return 0;
}