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
    int k;
    cin >> k;

    string a, b;
    cin >> a;

    bool ingles = false;

    for (int i = 0; i < k - 1; i++) {
      cin >> b;

      if (a != b) {
        ingles = true;
        break;
      }
    }

    if (ingles) {
      cout << "ingles" << endl;
    } else {
      cout << a << endl;
    }
  }

  return 0;
};