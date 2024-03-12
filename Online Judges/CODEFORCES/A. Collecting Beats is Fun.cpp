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

  int k;
  cin >> k;

  k = 2 * k;

  vector<int> c(10);

  for (int i = 0; i < 4; i++) {
    string s;
    cin >> s;

    for (auto c_i : s) {
      if (c_i == '.') continue;

      c[c_i - '0']++;
    }
  }

  for (int i = 1; i <= 9; i++) {
    if (c[i] > k) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;

  return 0;
}