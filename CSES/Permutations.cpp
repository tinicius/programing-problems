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

  if (n == 1)
    cout << 1 << endl;
  else if (n < 4)
    cout << "NO SOLUTION" << endl;
  else {

    for (ll i = 2; i <= n; i += 2)
      cout << i << " ";

    for (ll i = 1; i <= n; i += 2)
      cout << i << " ";
  }

  cout << endl;

  return 0;
}