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

ll n, T;

vector<ll> k(501);  // numero de pes
vector<ll> t(501);  // tamanho dos pes
vector<ll> m(501);  // majestosidade

vector<ll> e(501);
vector<ll> d(501);

vector<vector<ll>> dp(501, vector<ll>(50001, 0));

vector<vector<ll>> peias(501);

ll solve(ll k_i, ll tam, ll s) {
  if (k_i == peias[tam].size()) return 0;

  ll peia = peias[tam][k_i];

  auto& p = dp[peia][s];

  if (p != 0) return p;

  if (s * 2 >= k[peia])
    return p = max(solve(k_i + 1, tam, s - (k[peia] / 2)) + m[peia],
                   solve(k_i + 1, tam, s));

  return p = solve(k_i + 1, tam, s);
}

int main() {
  _;

  cin >> n >> T;

  for (ll i = 0; i < n; i++) {
    cin >> k[i] >> t[i] >> m[i];

    t[i]--;

    peias[t[i]].push_back(i);
  }

  for (ll i = 0; i < T; i++) cin >> e[i] >> d[i];

  ll ans = 0;

  for (ll i = 0; i < T; i++) {
    ll s = min(e[i], d[i]);

    for (int j = 0; j < peias[i].size(); j++) {
      for (int h = 0; h <= s; h++) {
        dp[j][h] = 0;
      }
    }

    ans += solve(0, i, s);
  }

  cout << ans << endl;
  return 0;
}