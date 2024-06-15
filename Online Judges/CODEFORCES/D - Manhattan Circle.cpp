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

  ll t;
  cin >> t;

  while (t--) {
    ll n, m;
    cin >> n >> m;

    vector<vector<char>> board(n, vector<char>(m));

    ll line;
    ll aux = 0;

    for (ll i = 0; i < n; i++) {
      ll sum = 0;

      for (ll j = 0; j < m; j++) {
        cin >> board[i][j];
        if (board[i][j] == '#') sum++;
      }

      if (sum > aux) {
        aux = sum;
        line = i;
      }
    }

    ll first;

    for (ll j = 0; j < m; j++) {
      if (board[line][j] == '#') {
        first = j;
        break;
      }
    }

    cout << line + 1 << " " << first + (aux / 2) + 1 << endl;
  }
};