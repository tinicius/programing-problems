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

  vector<int> c(4);
  vector<int> m(4);

  cin >> c[1] >> m[1];
  cin >> c[2] >> m[2];
  cin >> c[3] >> m[3];

  int aux = 0;

  for (int i = 0; i < 100; i++) {
    // dbg(aux);
    if (aux == 0) {
      // 1 to 2

      int empty = c[2] - m[2];

      if (m[1] >= empty) {
        m[2] += empty;
        m[1] -= empty;
      } else {
        m[2] += m[1];
        m[1] = 0;
      }
    }

    if (aux == 1) {
      // 2 to 3

      int empty = c[3] - m[3];

      if (m[2] >= empty) {
        m[3] += empty;
        m[2] -= empty;
      } else {
        m[3] += m[2];
        m[2] = 0;
      }
    }

    if (aux == 2) {
      // 3 to 1

      int empty = c[1] - m[1];

      if (m[3] >= empty) {
        m[1] += empty;
        m[3] -= empty;
      } else {
        m[1] += m[3];
        m[3] = 0;
      }
    }

    // cout << m[1] << " " << m[2] << " " << m[3] << endl;

    aux = (aux + 1) % 3;
  }

  cout << m[1] << endl;
  cout << m[2] << endl;
  cout << m[3] << endl;

  return 0;
}