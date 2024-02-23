#include <bits/stdc++.h>

#include <fstream>
using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool solve(vector<vector<char>> &m, string &s, int i, int j) {

  // vector<pair<int>> moves

  if (m[i][j] == '#')
    return false;

  for (auto c : s) {

    if (c == 'U') {
      i--;
    } else if (c == 'D') {
      i++;
    } else if (c == 'L') {
      j--;
    } else if (c == 'R') {
      j++;
    }

    if (m[i][j] == '#')
      return false;
  }

  return true;
}

int main() {
  _;

  int h, w, n;
  cin >> h >> w >> n;

  string s;
  cin >> s;

  vector<vector<char>> m(h, vector<char>(w));

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> m[i][j];
    }
  }

  int ans = 0;

  for (int i = 1; i < h - 1; i++) {
    for (int j = 1; j < w - 1; j++) {
      if (solve(m, s, i, j)) {
        // dbg(i);
        // dbg(j);
        ans++;
      }
    }
  }

  cout << ans << endl;
}