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

  int n;
  cin >> n;

  while (n--) {
    int x, y;
    cin >> x >> y;

    if (y > x) swap(x, y);

    cout << fixed << setprecision(0) << floor((double)y * (x / 2.0)) << " cm2"
         << endl;
  }

    return 0;
};