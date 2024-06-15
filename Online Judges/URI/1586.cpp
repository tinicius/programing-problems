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

ll n;
vector<ll> all;

bool check(ll k) {
  ll a = 0, b = 0;

  for (ll i = 0; i <= k; i++) a += all[i] * (k - i + 1);

  for (ll i = k + 1; i < n; i++) b += all[i] * (i - k);

  return a > b;
}

bool equal(ll k) {
  ll a = 0, b = 0;

  for (ll i = 0; i <= k; i++) a += all[i] * (k - i + 1);

  for (ll i = k + 1; i < n; i++) b += all[i] * (i - k);

  return a == b;
}

int main() {
  _;

  while (cin >> n) {
    if (n == 0) break;

    vector<string> nomes(n);

    all = vector<ll>();

    for (ll i = 0; i < n; i++) {
      string s;
      cin >> s;

      nomes[i] = s;

      ll sum = 0;
      for (auto c : s) sum += (ll)c;

      all.push_back(sum);
    }

    ll l = 0;
    ll r = n;

    while (l + 1 < r) {
      ll m = (l + r) / 2;

      if (check(m)) {
        r = m;
      } else {
        l = m;
      }
    }

    if (equal(l)) {
      cout << nomes[l] << endl;
    } else {
      cout << "Impossibilidade de empate." << endl;
    }
  }

  return 0;
};