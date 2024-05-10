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

  int t;
  cin >> t;

  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a > b) swap(a, b);
    if (c > d) swap(c, d);

    bool has_c = false;
    bool has_d = false;

    for (int i = a; i <= b; i++) {
      if (i == c) has_c = true;
      if (i == d) has_d = true;
    }

    if (!has_c and has_d) {
      cout << "YES" << endl;
    } else if (has_c and !has_d) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
};