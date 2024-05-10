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

  vector<ll> a(n);
  for (auto& ai : a) cin >> ai;

  unordered_map<int, vector<int>> aux;

  for (int i = 0; i < n; i++) {
    aux[a[i]].push_back(i + 1);
  }

  vector<pair<int, int>> ans;

  for (auto [x, y] : aux) {
    if (y.size() == 1) {
      ans.push_back({x, 0});
      continue;
    }

    bool valid = true;

    sort(y.begin(), y.end());

    int diff = y[1] - y[0];

    for (int i = 2; i < y.size(); i++) {
      if (y[i] - y[i - 1] != diff) {
        valid = false;
        break;
      }
    }

    if (valid) {
      ans.push_back({x, diff});
      continue;
    }
  }

  cout << ans.size() << endl;

  sort(ans.begin(), ans.end());

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i].first << " " << ans[i].second << endl;
  }

  return 0;
}