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

  string s;
  cin >> s;

  int n = s.size();

  vector<int> dp(n + 1, 0);

  dp[0] = 0;

  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1]) {
      dp[i + 1] = dp[i] + 1;
    } else {
      dp[i + 1] = dp[i];
    }
  }

  dp[n] = dp[n - 1];

  int q;
  cin >> q;

  while (q--) {
    int l, r;
    cin >> l >> r;

    cout << dp[r - 1] - dp[l - 1] << endl;
  }

  return 0;
}