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

  int n, m;
  cin >> n >> m;

  vector<int> mask(n, 0);

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    for (int j = 0; j < m; j++) {
      if (s[j] == 'o') mask[i] |= (1 << j);
    }
  }

  int ans = INF;

  for (int i = 0; i < (1 << n); i++) {
    int cnt = 0;

    int aux = 0;

    for (int k = 0; k < n; k++) {
      if ((i & (1 << k)) != 0) {
        cnt++;
        aux |= mask[k];
      }
    }

    if (aux == (1 << m) - 1) {
      ans = min(ans, cnt);
    }
  }

  cout << ans << endl;
};