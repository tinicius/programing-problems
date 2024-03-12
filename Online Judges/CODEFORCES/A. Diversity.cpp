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

  int k;
  cin >> k;

  if (s.size() < k) {
    cout << "impossible" << endl;
    return 0;
  }

  unordered_map<int, int> dp;

  int aux = 0;

  for (auto c : s) {
    if (dp[c] == 0) {
      aux++;
      dp[c]++;
    }
  }

  if (aux > k) {
    cout << 0 << endl;
  } else
    cout << k - aux << endl;

  return 0;
}