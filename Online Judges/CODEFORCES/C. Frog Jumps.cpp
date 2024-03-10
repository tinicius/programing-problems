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
    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    int aux = -1;

    // LLRRLRL

    int ans = 0;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'R') {
        // dbg(aux);
        // dbg(i);
        ans = max(ans, (i - aux));
        // cout << (i - aux) << endl;

        aux = i;
      }
    }

    // dbg(aux);
    // dbg(s.size());

    ans = max(ans, (int)s.size() - aux);
    // cout << (s.size() - aux) << endl;

    cout << ans << endl;
  }

  return 0;
}