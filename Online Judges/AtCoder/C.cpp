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

  int n, m, k;
  cin >> n >> m >> k;

  vector<int> c(m);
  vector<vector<int>> a(m);
  vector<char> r(m);

  for (int i = 0; i < m; i++) {
    cin >> c[i];

    vector<int> aux;

    for (int j = 0; j < c[i]; j++) {
      int num;
      cin >> num;
      aux.push_back(num);
    }

    a[i] = aux;

    cin >> r[i];
  }

  int ans = 0;

  for (int i = 0; i < (1 << n); i++) {
    bitset<15> x = i;

    bool valid = true;

    for (int j = 0; j < m; j++) {
      int aux = 0;

      for (int key : a[j]) {
        if (x[key - 1]) aux++;
      }

      if (aux >= k and r[j] == 'x') valid = false;
      if (aux < k and r[j] == 'o') valid = false;
    }

    if (valid) ans++;
  }

  cout << ans << endl;

  return 0;
};