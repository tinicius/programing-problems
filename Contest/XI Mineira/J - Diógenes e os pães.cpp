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

  int n, d;
  cin >> n >> d;

  vector<int> a(n);
  for (auto& di : a) cin >> di;

  vector<bool> up(n, false);
  vector<bool> valid(n, true);

  int ans = 0;

  while (1) {
    bool find = false;

    for (int i = 0; i < n; i++) {
      if (a[i] == d && up[i] && valid[i]) {
        find = true;
        valid[i] = false;
        ans++;
        break;
      }
    }

    for (int i = 0; i < n && !find; i++) {
      if (a[i] == d && valid[i]) {
        find = true;
        valid[i] = false;
        ans++;
        break;
      }
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] > d && up[i]) cnt++;

      if (a[i] == 0) up[i] = true;

      if (up[i])
        a[i]++;
      else
        a[i]--;
    }

    if (cnt == n) break;
  }

  cout << ans << endl;
};