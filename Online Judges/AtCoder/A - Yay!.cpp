#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);

#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

int main() {
  _;

  string s;
  cin >> s;

  int a = 0;
  int b = 0;

  for (int i = 1; i < s.size() - 1; i++) {
    if (s[i - 1] != s[i] and s[i] != s[i + 1]) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  if (s[0] != s[1] and s[0] != s[2]) {
    cout << 1 << endl;
    return 0;
  }

  int n = s.size() - 1;

  if (s[n] != s[n - 1] and s[n] != s[n - 2]) {
    cout << n + 1 << endl;
  }

  return 0;
}