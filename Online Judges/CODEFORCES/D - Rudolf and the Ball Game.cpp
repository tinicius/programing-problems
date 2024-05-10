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

int n, m, x;

vector<int> r;
vector<char> d;

int move_r(int p, int r) {
  // cout << p << " " << r << " ";

  int aux = (p + r) % n;

  if (aux == 0) {
    // cout << n << endl;
    return n;
  }
  // cout << aux << endl;
  return aux;
}

int move_l(int p, int r) {
  // cout << p << " " << r << " ";

  if (p - r <= 0) {
    // cout << n - (r - p) << endl;
    return n - (r - p);
  }
  // cout << p - r << endl;
  return p - r;
}

vector<vector<int>> dp;

set<int> ans;

vector<int> solve(int p, int i) {
  auto& aux = dp[p][i];

  if (aux) return {};

  if (i == m) {
    aux = 1;
    ans.insert(p);
    return {p};
  }

  // dbg(d[i]);

  if (d[i] == '0') solve(move_r(p, r[i]), i + 1);
  if (d[i] == '1') solve(move_l(p, r[i]), i + 1);
  if (d[i] == '?') {
    solve(move_r(p, r[i]), i + 1);
    solve(move_l(p, r[i]), i + 1);
  }

  aux = 1;

  return {};
}

int main() {
  _;

  ll t;
  cin >> t;

  while (t--) {
    cin >> n >> m >> x;

    r = vector<int>(m);
    d = vector<char>(m);

    dp = vector<vector<int>>(n + 1, vector<int>(m + 1));

    ans = set<int>();

    for (int i = 0; i < m; i++) {
      cin >> r[i] >> d[i];
    }

    solve(x, 0);

    cout << ans.size() << endl;
    for (auto si : ans) cout << si << " ";
    cout << endl;
  }

  return 0;
}