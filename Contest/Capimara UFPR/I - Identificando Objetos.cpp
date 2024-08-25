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

  vector<int> aux(10, 0);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char c;
      cin >> c;

      aux[(int)c - '0']++;
    }
  }

  int ans;
  int v = 0;

  for (int i = 0; i <= 9; i++) {
      if (aux[i] >= v) {
      ans = i;
      v = aux[i];
    }
  }

  cout << ans << endl;
};
