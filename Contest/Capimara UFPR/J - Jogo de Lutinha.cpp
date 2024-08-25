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

bool intersect(vector<int> s1, vector<int> s2) {
  int bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
  int bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];
  // no overlap
  if (bl_a_x >= tr_b_x || tr_a_x <= bl_b_x || bl_a_y >= tr_b_y ||
      tr_a_y <= bl_b_y) {
    return false;

  } else {
    return true;
  }
}

int main() {
  _;

  int n;
  cin >> n;

  vector<vector<int>> a(n, vector<int>(4));
  for (auto& ai : a) cin >> ai[0] >> ai[2] >> ai[1] >> ai[3];

  int m;
  cin >> m;

  vector<vector<int>> b(m, vector<int>(4));
  for (auto& bi : b) cin >> bi[0] >> bi[2] >> bi[1] >> bi[3];

  int ans = 0;

  vector<bool> aux(m);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (intersect(a[i], b[j])) {
        aux[j] = 1;
      }
    }
  }

  for (int i = 0; i < m; i++) {
    if (aux[i]) ans++;
  }

  cout << ans << endl;

  return 0;
};
