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

  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '0') {
      s.erase(i, 1);
      cout << s << endl;
      return 0;
    }
  }

  s.pop_back();
  cout << s << endl;

  return 0;
}