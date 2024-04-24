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

  vector<int> b(n);
  for (auto& b_i : b) cin >> b_i;

  vector<int> p(m);
  for (auto& p_i : p) cin >> p_i;

  set<int> ans;
  for (auto& b_i : b) ans.insert(b_i);

  for (int i = 0; i < (1 << m); i++) {
    int left = 0;

    for (int k = 0; k < m; k++) {
      if (i & (1 << k)) {
        left += p[k];
      }
    }

    vector<int> right;

    for (int k = 0; k < m; k++) {
      if ((i & (1 << k)) == 0) {
        right.push_back(p[k]);
      }
    }

    bool equal = false;

    for (int r = 0; r < (1 << right.size()); r++) {
      int aux = 0;

      for (int k = 0; k < right.size(); k++) {
        if (r & (1 << k)) aux += right[k];
      }

      if (aux == left) equal = true;
    }

    if (equal) {
      for (auto b_i : b) ans.insert(b_i + left + left);
    }
  }

  for (auto i : ans) cout << i << endl;

  return 0;
}