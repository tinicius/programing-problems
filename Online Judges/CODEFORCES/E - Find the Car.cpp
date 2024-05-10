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
    ll n, k, q;
    cin >> n >> k >> q;

    vector<ll> a(k + 1);
    vector<ll> b(k + 1);

    for (ll i = 1; i <= k; i++) cin >> a[i];
    for (ll i = 1; i <= k; i++) cin >> b[i];

    unordered_map<ll, long double> speed;

    for (ll i = 0; i < k; i++) {
      // dbg(a[i + 1]);
      // dbg(a[i]);
      // dbg(b[i + 1]);
      // dbg(b[i]);
      speed[a[i]] = (long double)(a[i + 1] - a[i]) / (b[i + 1] - b[i]);
    }

    speed[n] = 1;

    // for (auto ai : a) cout << ai << " ";
    // cout << endl;

    // for (auto ai : speed) cout << ai << " ";
    // cout << endl;

    while (q--) {
      ll d;
      cin >> d;

      if (d == n) {
        cout << b[k] << " ";
        continue;
      }

      auto x = lower_bound(a.begin(), a.end(), d);

      if (*x != d) x--;

      // dbg(*x);

      ll p = x - a.begin();

      long double s = speed[*x];

      // dbg(p);
      // dbg(s);

      cout << fixed << setprecision(0) << floorl(b[p] + ((d - a[p]) / s))
           << " ";

      // cout << fixed << setprecision(0) << floorl(a[p] + (d - b[p]) / s) <<
      // endl;
    }

    cout << endl;
  }

  return 0;
};