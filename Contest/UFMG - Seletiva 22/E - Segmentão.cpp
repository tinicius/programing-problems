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

  int n;
  cin >> n;

  vector<pair<int, int>> seg(n);

  int l = INF;
  int r = 0;

  for (int i = 0; i < n; i++) {
    cin >> seg[i].first >> seg[i].second;

    l = min(l, seg[i].first);
    r = max(r, seg[i].second);
  }

  for (int i = 0; i < n; i++) {
    if (seg[i].first == l and seg[i].second == r) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}