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

  ll n, k;
  cin >> n >> k;

  vector<ll> a(n);
  for (auto& a_i : a) cin >> a_i;

  sort(a.begin(), a.end());

  ll aux = 0;

  ll c = 0;

  while (aux < k) {
    if (c % 2 == 0)
      aux += a[n-1];
    else
      aux += a[n-2];

    c++;
  }

  cout << c<< endl;

  return 0;
}