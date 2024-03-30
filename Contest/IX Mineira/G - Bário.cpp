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

  string s;
  cin >> s;

  int ans = 0;

  int energia = 0;
  bool is_jumping = false;

  for (auto c : s) {
    if (c == 'x') {
      if (is_jumping) {
        energia = 1;
        is_jumping = false;
      } else
        energia++;
    } else {
      if (!is_jumping) {
        is_jumping = true;
        ans++;
      }
      energia--;
    }

    if (energia < 0) {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << ans << endl;
  return 0;
}