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

  vector<ll> q(n);
  vector<ll> a(n);
  vector<ll> b(n);

  for (auto& q_i : q) cin >> q_i;
  for (auto& a_i : a) cin >> a_i;
  for (auto& b_i : b) cin >> b_i;

  ll m_q = 0;

  for (ll i = 0; i < n; i++) {
    m_q = max(m_q, q[i]);
  }

  ll ans = 0;

  for (ll i = 0; i <= m_q; i++) {
    ll r_b = INF;

    // dbg(i);

    for (ll k = 0; k < n; k++) {
      ll aux = q[k] - (i * a[k]);
      // dbg(aux);
      if (b[k] == 0)
        // r_b = aux;
        continue;
      else
        r_b = min(r_b, aux / b[k]);
    }

    // dbg(r_b);

    ans = max(ans, i + r_b);
  }

    cout << ans << endl;

  return 0;
}