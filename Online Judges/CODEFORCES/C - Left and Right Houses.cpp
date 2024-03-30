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

  ll t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> zero(n, 0);
    vector<int> um(n + 1, 0);

    if (s[0] == '0') zero[0] = 1;
    if (s[n - 1] == '1') um[n - 1]++;

    for (int i = 1; i < n; i++) {
      zero[i] = zero[i - 1];
      if (s[i] == '0') zero[i]++;
    }

    for (int i = n - 2; i >= 0; i--) {
      um[i] = um[i + 1];
      if (s[i] == '1') um[i]++;
    }

    if (zero[n - 1] == n) {
      cout << n << endl;
      continue;
    }

    if (um[0] == n) {
      cout << 0 << endl;
      continue;
    }

    int ans = -1;
    double aux = INF;

    // dbg(n);

    for (int i = 0; i < n; i++) {
      int q_l = i + 1;
      int q_r = n - 1 - i;

      int l = zero[i];

      int r = um[i + 1];

      if (l >= (q_l) / 2.0 and r >= (q_r) / 2.0) {
        if (abs(n / 2.0 - (i + 1)) < aux) {
          aux = abs(n / 2.0 - (i + 1));
          // dbg(i);
          ans = i + 1;
        }
      }
    }

    // dbg(ans);
    // dbg(aux);

    int q_l = 0;
    int q_r = n;

    int l = 0;
    int r = um[0];

    if (l >= (q_l) / 2.0 and r >= (q_r) / 2.0) {
      if (abs(n / 2.0 - 1) < aux) {
        aux = abs(n / 2.0 - 1);
        ans = 0;
      }
    }

    // dbg(ans);
    // dbg(aux);

    q_l = n;
    q_r = 0;

    l = zero[n - 1];
    r = 0;

    if (l >= (q_l) / 2.0 and r >= (q_r) / 2.0) {
      if (abs(n / 2 - (n)) < aux) {
        aux = abs(n / 2 - (n));
        ans = n + 1;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
