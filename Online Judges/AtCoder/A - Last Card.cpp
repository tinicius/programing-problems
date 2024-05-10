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

  int n, k, a;
  cin >> n >> k >> a;

  k--;

  while (k--) {
    a++;

    if (a == n + 1) a = 1;
  }

  cout << a << endl;

  return 0;
}