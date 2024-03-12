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
  cin >> n >> k;

  vector<int> w(n);
  for (auto& w_i : w) cin >> w_i;

  int aux = 0;

  for (auto w_i : w) {
    if (w_i < k)
      aux++;
    else {
      aux += w_i / k;
      if (w_i % k != 0) aux++;
    }

  }

  cout << (aux + 1) / 2 << endl;

  return 0;
}