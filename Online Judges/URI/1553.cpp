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

  int n, k;

  while (cin >> n >> k) {
    if (n == 0 and k == 0) break;

    vector<int> cnt(101);

    vector<int> p(n);
    for (auto& pi : p) {
      cin >> pi;

      cnt[pi]++;
    }

    int ans = 0;

    for (int i = 1; i <= 100; i++) {
      if (cnt[i] >= k) ans++;
    }

    cout << ans << endl;
  }

  return 0;
};