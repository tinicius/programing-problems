#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
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

  if (!((int)s[0] <= 'Z' and (int) s[0] >= 'A')) {
    cout << "No" << endl;
    return 0;
  }

  for (ll i = 1; i < s.size(); i++) {

    if (!((int)s[i] <= 'z' and (int) s[i] >= 'a')) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}