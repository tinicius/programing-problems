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

  long double n, m, t;
  cin >> n >> m >> t;

  vector<long double> men(31);
  vector<long double> girls(31);

  vector<long double> fat(31);

  fat[0] = 1;
  fat[1] = 1;

  for (long double i = 2; i <= 30; i++) {
    fat[i] = fat[i - 1] * i;
  }

  for (long double b = 4; b <= t - 1; b++) {
    if (n - b < 0) continue;
    men[b] = fat[n] / (fat[b] * fat[n - b]);
  }

  for (long double b = 1; b <= t - 4; b++) {
    if (m - b < 0) continue;
    girls[b] = fat[m] / (fat[b] * fat[m - b]);
  }

  long double ans = 0;

  for (long double i = 4; i <= t - 1; i++) {
    if (i > n || (t - i) > m) continue;

    // dbg(i);

    ans += men[i] * girls[t - i];
  }

  cout << fixed << setprecision(0) << ans << endl;

  return 0;
}