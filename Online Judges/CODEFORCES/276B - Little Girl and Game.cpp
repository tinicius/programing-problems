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

  vector<int> aux(200);

  for (auto si : s) aux[si]++;

  int impares = 0;

  for (char i = 'a'; i <= 'z'; i++) {
    if (aux[i] % 2 != 0) impares++;
  }

  if (impares == 0 || impares == 1) {
    cout << "First" << endl;
    return 0;
  }

  impares--;

  if (impares % 2 != 0) {
    cout << "Second" << endl;
    return 0;
  } else {
    cout << "First" << endl;
    return 0;
  }

  return 0;
}