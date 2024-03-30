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

  string s = "wbwbwwbwbwbw";

  int w, b;
  cin >> w >> b;

  for (int i = 0; i < s.size(); i++) {
    int c = i;

    int w_c = 0;
    int b_c = 0;

    while (w_c < w or b_c < b) {
      if (s[c] == 'w')
        w_c++;
      else
        b_c++;

      c = (c + 1) % s.size();

      // if (w_c == w and b_c == b) break;
    }

    if (w_c == w and b_c == b) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}