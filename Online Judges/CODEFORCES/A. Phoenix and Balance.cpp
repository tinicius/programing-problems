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

  int t;
  cin >> t;

  while (t--) {

    int n;
    cin >> n;

    int pote1 = 0, pote2 = 0;
    int len1 = 0, len2 = 0;

    vector<int> coins;

    for (int i = 1; i <= n; i++) {
      coins.push_back(pow(2, i));
    }

    int count = 0;

    for (int i = 0; i < n / 2; i++) {

      if (i == 0) {
        pote1 = coins[coins.size() - 1];
      } else {
        pote1 += coins[i - 1];
      }
    }

    for (int i = coins.size() - 2; i >= (n / 2) - 1; i--) {
      pote2 += coins[i];
    }

    cout << abs(pote2 - pote1) << endl;
  }

  return 0;
}