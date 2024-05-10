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

  for (auto c : s) {
    if (c != 'A' and c != 'B' and c != 'C') {
      cout << "No" << endl;
      return 0;
    }
  }

  string aux = s;
  sort(aux.begin(), aux.end());

  if (aux == s) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}