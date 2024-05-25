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

  int n, t;
  cin >> n >> t;

  vector<int> a(n - 1);
  for (auto& ai : a) cin >> ai;

  bool ans = false;

  int p = 0;

  while (p < n) {
    // dbg(p + 1);
    if (p + 1 == t) {
      ans = 1;
      break;
    }

    if (p == n - 1) break;

    if (p < n - 1) p = p + a[p];
  }

  if (ans)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
};