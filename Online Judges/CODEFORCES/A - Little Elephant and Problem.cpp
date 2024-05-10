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

  vector<int> b = a;

  sort(b.begin(), b.end());

  vector<int> diff;

  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) diff.push_back(i);
  }

  if (diff.size() > 2) {
    cout << "NO" << endl;
    return 0;
  }

  if (diff.size() == 0) {
    cout << "YES" << endl;
    return 0;
  }

  swap(a[diff[0]], a[diff[1]]);

  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;

  return 0;
}