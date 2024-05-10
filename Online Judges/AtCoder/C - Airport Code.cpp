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

  string s, t;
  cin >> s >> t;

  for (auto& ti : t) ti = tolower(ti);

  // dbg(t);

  int a = -1;
  int b = -1;
  int c = -1;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == t[0]) {
      a = i;
      break;
    }
  }

  if (a == -1) {
    // dbg(a);
    cout << "No" << endl;
    return 0;
  }

  for (int i = a + 1; i < s.size(); i++) {
    if (s[i] == t[1]) {
      b = i;
      break;
    }
  }

  if (b == -1) {
    // dbg(b);
    cout << "No" << endl;
    return 0;
  }

  if (t[2] == 'x') {
    cout << "Yes" << endl;
    return 0;
  }

  for (int i = b + 1; i < s.size(); i++) {
    if (s[i] == t[2]) {
      c = i;
      break;
    }
  }

  if (c == -1) {
    // dbg(c);
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}