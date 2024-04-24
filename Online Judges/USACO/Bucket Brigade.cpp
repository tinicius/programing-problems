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

struct Point {
  int x;
  int y;
};

Point a, b, z;

bool line_x() { return a.x == b.x and a.x == z.x; }
bool line_y() { return a.y == b.y and a.y == z.y; }

int main() {
  _;

  vector<vector<char>> m(10, vector<char>(10));

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> m[i][j];

      if (m[i][j] == 'B') a = {i, j};
      if (m[i][j] == 'R') z = {i, j};
      if (m[i][j] == 'L') b = {i, j};
    }
  }

  if (line_x() and ((a.y > z.y and z.y > b.y) || ((a.y < z.y and z.y < b.y)))) {
    cout << ((abs(a.x - b.x) + abs(a.y - b.y)) - 1) + 2 << endl;
  } else if (line_y() and ((a.x > z.x and z.x > b.x) || ((a.x < z.x and z.x < b.x)))) {
    cout << ((abs(a.x - b.x) + abs(a.y - b.y)) - 1) + 2 << endl;
  } else {
    cout << (abs(a.x - b.x) + abs(a.y - b.y)) - 1 << endl;
  }

  return 0;
}