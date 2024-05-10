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

int area(int a, int b) { return 4 * a * b + 3 * a + 3 * b; }

int main() {
  _;

  int n;
  cin >> n;

  vector<int> s(n);
  for (auto& si : s) cin >> si;

  unordered_map<int, int> cnt;

  for (int a = 1; a < 400; a++) {
    for (int b = 1; b < 400; b++) {
      // if (area(a, b) == 666) cout << a << " " << b << endl;
      if (area(a, b) <= 1000) cnt[area(a, b)]++;
    }
  }

  int ans = 0;

  for (auto si : s) {
    // dbg(cnt[si]);

    if (cnt[si] == 0) ans++;
  }

  cout << ans << endl;

  return 0;
}