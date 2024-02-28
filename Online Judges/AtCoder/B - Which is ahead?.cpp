#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);

#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

int main() {
  _;

  ll n;
  cin >> n;

  vector<ll> p(n);

  vector<ll> aux(n + 1);

  for (int i = 0; i < n; i++) {
    cin >> p[i];
    aux[p[i]] = i;
  }

  ll q;
  cin >> q;

  while (q--) {
    ll a, b;
    cin >> a >> b;

    if (aux[a] < aux[b]) {
      cout << a << endl;
    } else {
      cout << b << endl;
    }
  }

  return 0;
}