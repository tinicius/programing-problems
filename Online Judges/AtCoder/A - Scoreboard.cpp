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

  int x = 0;
  int y = 0;

  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;

    x += a;
    y += b;
  }

  if (x > y) {
    cout << "Takahashi" << endl;
  } else if (y > x) {
    cout << "Aoki" << endl;
  } else {
    cout << "Draw" << endl;
  }
};
