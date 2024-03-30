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

  ll n;
  cin >> n;

  vector<int> cup(4, 0);

  cup[2] = 1;

  while (n--) {
    ll a, b;
    cin >> a >> b;

    swap(cup[a], cup[b]);
  }

  for (int i = 1; i <= 3; i++) {
    if (cup[i] == 1) cout << i << endl;
  }

  return 0;
}