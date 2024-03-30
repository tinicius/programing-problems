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

  int n;
  cin >> n;

  string s;
  cin >> s;

  string aux;

  int count = 0;

  for (auto c : s) {
    if (c == 'V') {
      aux.push_back(c);
      continue;
    }

    if (c == 'C' and aux[aux.size() - 1] != 'C') {
      aux.push_back(c);
      count++;
      continue;
    }
  }

  if (count <= 1) {
    cout << 0 << endl;
    return 0;
  }

  int ans = 0;

  bool find = false;
  int l = 0;

  for (int i = 0; i < aux.size(); i++) {
    if (aux[i] == 'C' and !find) find = true;
    if (aux[i] == 'C') l++;
    if (l == count) find = false;

    if(aux[i] == 'V' and find) ans++;
  }

  cout << ans << endl;

  return 0;
}