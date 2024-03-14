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

vector<ll> a;
vector<ll> b;

vector<vector<ll>> dp(1001, vector<ll>(1001, -1));

ll lcs(ll i, ll j) {
  if (i < 0 or j < 0) return 0;

  auto& p = dp[i][j];

  if (p != -1) return p;

  if (a[i] == b[j]) return p = lcs(i - 1, j - 1) + 1;

  return p = max(lcs(i - 1, j), lcs(i, j - 1));
}

int main() {
  _;

  ll n, m;
  cin >> n >> m;

  for (ll i = 0; i < n; i++) {
    ll s;
    cin >> s;
    a.push_back(s);
  }

  for (ll i = 0; i < m; i++) {
    ll s;
    cin >> s;
    b.push_back(s);
  }

  ll l = lcs(n - 1, m - 1);

  cout << a.size() - l << " " << b.size() - l << endl;

  return 0;
}