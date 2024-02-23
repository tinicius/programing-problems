#include <bits/stdc++.h>

#include <fstream>
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

  vector<ll> a(n);
  vector<ll> s(n - 1);
  vector<ll> t(n - 1);

  for (ll i = 0; i < n; i++)
    cin >> a[i];

  for (ll i = 0; i < n - 1; i++)
    cin >> s[i] >> t[i];

  for (ll i = 0; i < n - 1; i++) {

    if (a[i] >= s[i]) {

      ll div = a[i] / s[i];
      a[i + 1] += t[i] * div;
    }
  }

  //   for (auto i : a)
  //     cout << i << " ";
  //   cout << endl;

  cout << a[n - 1] << endl;
}