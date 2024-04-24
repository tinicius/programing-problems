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

  string aux;
  aux.push_back(s[3]);
  aux.push_back(s[4]);
  aux.push_back(s[5]);

  int a = atoi(aux.c_str());

  if (a >= 1 and a < 350) {
    if (a == 316) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  } else {
    cout << "No" << endl;
  }

  return 0;
}