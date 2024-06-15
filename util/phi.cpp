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

#define MAX 2123456

vector<ll> phi(MAX + 10);
vector<ll> delphi(MAX + 10);

void init_phi() {
  for (ll i = 1; i <= MAX; i++) phi[i] = i;

  for (ll i = 2; i <= MAX; i++) {
    if (phi[i] == i) {
      for (ll j = i; j <= MAX; j += i) {
        phi[j] = phi[j] - (phi[j] / i);
      }
    }
  }
}

void init_delphi() {
  delphi[2] = 1;

  for (ll i = 3; i <= MAX; i++) {
    delphi[i] = delphi[phi[i]] + 1;
  }
}

int main() {
  _;

  init_phi();
  init_delphi();

  vector<ll> sum(MAX);

  sum[2] = delphi[2];

  for (ll i = 3; i < MAX; i++) {
    sum[i] = sum[i - 1] + delphi[i];
  }

  ll t;
  cin >> t;

  while (t--) {
    ll m, n;
    cin >> m >> n;

    cout << sum[n] - sum[m - 1] << endl;
  }

  return 0;
};