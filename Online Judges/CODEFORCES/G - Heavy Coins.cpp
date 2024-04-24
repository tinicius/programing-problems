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

  int t;
  cin >> t;

  while (t--) {
    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    for (auto& a_i : a) cin >> a_i;

    int ans = 0;

    for (int i = 0; i < pow(2, n); i++) {
      int aux = 0;
      int moedas = 0;

      int menor = INF;

      for (int k = 0; k < n; k++) {
        if (i & (1 << k)) {
          menor = min(menor, a[k]);
          aux += a[k];
          moedas++;
        }
      }

      if (aux >= s and !(aux - menor >= s)) {
        ans = max(ans, moedas);
      }
    }

    cout << ans << endl;
  }

  return 0;
}