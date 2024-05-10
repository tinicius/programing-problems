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

  int n, x, y, z;
  cin >> n >> x >> y >> z;

  if (x > y) {
    if (y <= z and z <= x) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  } else {
    if (z >= x and z <= y) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}