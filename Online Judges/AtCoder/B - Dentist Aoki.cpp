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

  int n, q;
  cin >> n >> q;

  vector<int> t(q);
  for (auto& ti : t) cin >> ti;

  int ans = n;

  vector<bool> dente(1001, 1);

  for (auto ti : t) {
    if (dente[ti]) {
      dente[ti] = 0;
      ans--;
    } else {
      dente[ti] = 1;
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}