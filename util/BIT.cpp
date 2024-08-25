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

#define MAX 112345

int n;

vector<int> bit(MAX, 0);

ll getbit(int i) {
  ll ans = 0;

  while (i) {
    ans += bit[i];
    i -= i & -i;
  }

  return ans;
}

void setbit(int i, int diff) {
  while (i <= n) {
    bit[i] += diff;
    i += i & -i;
  }
}

int main() {
  _;

  cin >> n;

  ll ans = 0;

  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;

    // getbit(x) -> Numero de valores < x

    ans += (i - 1) - getbit(x - 1);

    setbit(x, 1);
  }

  cout << ans << endl;
};