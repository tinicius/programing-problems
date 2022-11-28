#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
  _;

  ll n;
  cin >> n;

  while (n != 1) {

    cout << n << " ";

    if (n % 2 == 0)
      n /= 2;
    else
      n = (n * 3) + 1;
  }

  cout << 1 << " " << endl;

  return 0;
}