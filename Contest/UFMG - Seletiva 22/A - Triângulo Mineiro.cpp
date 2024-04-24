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
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b <= c) {
      cout << "No" << endl;
      continue;
    }

    if (a + c <= b) {
      cout << "No" << endl;
      continue;
    }

    if (c + b <= a) {
      cout << "No" << endl;
      continue;
    }

    cout << "Yes" << endl;
  }

  return 0;
}