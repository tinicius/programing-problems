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

  ll g;
  cin >> g;

  string s;
  cin >> s;

  int aux = 0;

  int m_p = 0;
  int m_n = 0;

  for (auto c : s) {
    if (c == 'D')
      aux += g;
    else
      aux -= g;

    if (aux > 0)
      m_p = max(m_p, aux);
    else
      m_n = min(m_n, aux);
  }

  if(360 - m_p <= abs(m_n)) {
    cout << "S" << endl;
  } else {
    cout << "N" << endl;
  }

  // dbg(m_p);
  // dbg(m_n);

  return 0;
}