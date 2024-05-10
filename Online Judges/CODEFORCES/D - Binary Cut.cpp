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
    string s;
    cin >> s;

    int aux = 1;

    int zer = 0;
    int one = 0;

    int zerone = 0;

    if (s[0] == '0')
      zer++;
    else
      one++;

    for (int i = 1; i < s.size(); i++) {
      if (s[i] != s[i - 1]) {
        aux++;

        if (s[i] == '1' and s[i - 1] == '0') {
          zerone++;
          one++;
        } else if (s[i] == '1')
          one++;
        else
          zer++;
      }
    }

    // dbg(s);
    // dbg(zer);
    // dbg(one);
    // dbg(zerone);

    // cout << aux << endl;

    if (zerone > 0) {
      cout << (zer - 1) + (one - 1) + 1 << endl;
    } else {
      cout << aux << endl;
    }
  }

  return 0;
};