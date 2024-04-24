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

  int n, k;
  cin >> n >> k;

  int aux = 0;

  string line;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    if (aux + s.size() <= k) {
      if (line.size() != 0) line += " ";
      line += s;

      aux += s.size();
    } else {
      cout << line << endl;
      line = s;
      aux = s.size();
    }
  }

  if (line.size() > 0) cout << line << endl;

  return 0;
}