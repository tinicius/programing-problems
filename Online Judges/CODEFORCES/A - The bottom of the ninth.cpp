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

  vector<int> a(9);
  for (int i = 0; i < 9; i++) cin >> a[i];

  vector<int> b(8);
  for (int i = 0; i < 8; i++) cin >> b[i];

  int asum = accumulate(a.begin(), a.end(), 0);
  int bsum = accumulate(b.begin(), b.end(), 0);

  cout << (asum + 1) - bsum << endl;

  return 0;
}