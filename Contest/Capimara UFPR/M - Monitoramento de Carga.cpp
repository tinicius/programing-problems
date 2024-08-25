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

  int n;
  cin >> n;

  vector<int> a(n);

  for (auto& ai : a) cin >> ai;

  bool ans = false;

  for (int i = 0; i < n - 2; i++) {
    if (a[i] >= 100 && a[i + 1] >= 100 and a[i + 2] >= 100) ans = true;
  }

  if (ans)
    cout << "reboot" << endl;
  else
    cout << "sleep" << endl;
};
