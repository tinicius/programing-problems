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

  ll sum = 0;

  for (int i = 0; i < n - 1; i++) {
    ll a;
    cin >> a;
    sum += a;
  }

  ll start = (sum % n) - 1;

  for (int k = 0; k < n; k++) {
    int idx = -1;

    for (int i = 0; i < 21; i++) {
      ll a = ((start + 1) + i) % n;

      if (a == k) {
        // dbg(a);
        idx = i;
        break;
      }
    }

    cout << idx << endl;

    // if (idx == -1)
    //   cout << -1 << endl;
    // else if (idx == 0)
    //   cout << n - 1 << endl;
    // else
    //   cout << idx - 1 << endl;
  }

  return 0;
}