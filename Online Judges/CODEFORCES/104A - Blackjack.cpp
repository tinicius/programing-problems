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

  if (n <= 10) {
    cout << 0 << endl;
    return 0;
  }

  int x = n - 10;

  if (x == 10) {
    cout << 15 << endl;
    return 0;
  }

  if (x > 11) {
    cout << 0 << endl;
    return 0;
  }

  cout << 4 << endl;

  return 0;
}