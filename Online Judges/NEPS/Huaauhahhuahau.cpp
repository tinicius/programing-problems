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

  string aux = "";

  for (auto c : s) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') aux += c;
  }

  string r = aux;

  reverse(r.begin(), r.end());

  if(aux == r) {
    cout << "S" << endl;
  } else {
    cout << "N" << endl;
  }

  return 0;
}