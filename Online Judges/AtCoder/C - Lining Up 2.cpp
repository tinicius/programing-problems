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

  vector<int> behind(n + 1);

  int x;

  for (int i = 0; i < n; i++) {
    if (a[i] == -1) {
      x = i + 1;
      continue;
    }

    behind[a[i]] = i + 1;
  }

  cout << x << " ";

  while (behind[x]) {
    cout << behind[x] << " ";

    x = behind[x];
  }

  return 0;
}