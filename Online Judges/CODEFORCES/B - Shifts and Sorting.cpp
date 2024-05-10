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

int h, w;
vector<vector<char>> board(1001, vector<char>(1001));

vector<vector<bool>> vis(1001, vector<bool>(1001, 0));

vector<vector<int>> sum(1001, vector<int>(1001, 1));

int dfs(int i, int j) {
  if (i < 0 || j < 0 || i >= h || j >= w) return 0;
  if (board[i][j] == '#') return 0;
  if (board[i][j] == 'A') return 0;

  if (vis[i][j]) return 0;

  vis[i][j] = 1;

  vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

  int ans = sum[i][j];

  for (auto [mx, my] : moves) {
    int x = dfs(i + mx, j + my);

    ans += x;
  }

  return ans;
}

int main() {
  _;

  ll t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    ll cnt = 0;

    ll ans = 0;

    for (ll i = 0; i < s.size(); i++) {
      if (s[i] == '0') {
        // cout << i << " " << cnt << endl;

        if (i != cnt) {
          ans += (i - cnt) + 1;
        }

        cnt++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}