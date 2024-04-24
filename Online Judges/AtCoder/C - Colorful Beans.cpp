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
  vector<int> c(n);

  unordered_map<int, int> m;

  for (int i = 0; i < n; i++) {
    cin >> a[i] >> c[i];

    if (m[c[i]] == 0)
      m[c[i]] = a[i];
    else
      m[c[i]] = min(m[c[i]], a[i]);
  }

  int ans = 0;

  for (auto [color, minimum] : m) {
    // cout << color << " " << minimum << endl;
    ans = max(ans, minimum);
  }

  cout << ans << endl;

  return 0;
}