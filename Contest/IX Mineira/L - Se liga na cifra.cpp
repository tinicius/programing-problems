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

  int n;
  cin >> n;

  if (n == 1) {
    cout << s << endl;
    return 0;
  }

  map<int, int> qnt;

  int c = 0;
  int aux = 0;
  bool up = true;

  while (c < s.size()) {
    if (up)
      aux++;
    else
      aux--;

    if (aux == n) up = false;
    if (aux == 1) up = true;

    // dbg(aux);
    qnt[aux]++;
    c++;
  }

  vector<string> linhas(n + 1);

  int idx = 0;

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < qnt[i]; j++) {
      linhas[i].push_back(s[idx]);
      idx++;
    }
  }

  // for (auto s_i : linhas) cout << s_i << endl;
  // return 0;
  unordered_map<int, int> p(n + 1);

  string ans;

  c = 0;
  aux = 0;
  up = true;

  while (c < s.size()) {
    if (up)
      aux++;
    else
      aux--;

    if (aux == n) up = false;
    if (aux == 1) up = true;

    // cout << aux << " " << p[aux] + 1 << endl;
    ans += linhas[aux][p[aux]];
    p[aux]++;

    c++;
  }

  cout << ans << endl;

  return 0;
}