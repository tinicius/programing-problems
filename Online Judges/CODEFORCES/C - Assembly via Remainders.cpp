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

  ll t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    vector<ll> x(n);
    for (ll i = 1; i < n; i++) cin >> x[i];

    vector<ll> a(n, 1e9);

    a[0] = 505;

    for (ll i = 1; i < n; i++) {
      // dbg(x[i]);
      a[i] = a[i - 1] + x[i];
    }

    for (auto i : a) cout << i << " ";
    cout << endl;

    // for (int i = 1; i < n; i++) {
    //   cout << a[i] % a[i - 1] << " ";
    // }

    // cout << endl << endl;
  }

  return 0;
}