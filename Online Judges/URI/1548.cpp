
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
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (auto& ai : a) cin >> ai;

    b = a;

    sort(b.begin(), b.end(), greater<int>());

    int ans = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] == b[i]) ans++;
    }

    cout << ans << endl;
  }

  return 0;
};