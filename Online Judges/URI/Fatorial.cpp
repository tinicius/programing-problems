#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
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

  vector<int> fat(11);
  fat[0] = 1;

  for (int i = 1; i < 11; i++) {
    fat[i] = fat[i - 1] * i;
  }

  int ans = 0;

  for (int i = 10; i > 0; i--) {
    int div = n / fat[i];

    if (div > 0) {
      n = n - (fat[i] * div);
      ans += div;
    }
  }

  cout << ans << endl;

  return 0;
}