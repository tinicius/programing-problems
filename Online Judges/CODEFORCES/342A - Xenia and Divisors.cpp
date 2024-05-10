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

  ll n;
  cin >> n;

  vector<int> a(n);
  for (auto& ai : a) cin >> ai;

  vector<int> aux(8);
  for (auto ai : a) aux[ai]++;

  if (aux[1] != n / 3) {
    cout << -1 << endl;
    return 0;
  }

  vector<vector<int>> ans;

  for (int i = 0; i < aux[3]; i++) {
    if (aux[6] > 0) {
      ans.push_back({1, 3, 6});
      aux[6]--;
    } else {
      cout << -1 << endl;
      return 0;
    }
  }

  for (int i = 0; i < aux[2]; i++) {
    if (aux[6] > 0) {
      ans.push_back({1, 2, 6});
      aux[6]--;
    } else if (aux[4] > 0) {
      ans.push_back({1, 2, 4});
      aux[4]--;
    } else {
      cout << -1 << endl;
      return 0;
    }
  }

  for (int i = 4; i <= 7; i++) {
    if (aux[i] != 0) {
      cout << -1 << endl;
      return 0;
    }
  }

  for (auto i : ans) {
    for (auto x : i) cout << x << " ";
    cout << endl;
  }

  return 0;
}