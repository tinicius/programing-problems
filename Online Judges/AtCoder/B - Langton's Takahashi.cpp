#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);

#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll h, w, n;

void move(ll &i, ll &j, ll c) {
  if (c == 0) {
    i--;

    if (i < 0) {
      i = h - 1;
    }

  } else if (c == 1) {
    j++;

    if (j >= w) {
      j = 0;
    }

  } else if (c == 2) {
    i++;

    if (i >= h) {
      i = 0;
    }
  } else {
    j--;

    if (j < 0) {
      j = w - 1;
    }
  }
}

int main() {
  _;

  cin >> h >> w >> n;

  vector<vector<char>> m(h, vector<char>(w, '.'));

  ll i = 0;
  ll j = 0;

  // 0 up

  ll c = 0;

  while (n--) {

    if (m[i][j] == '.') {
      m[i][j] = '#';

      c = (c + 1) % 4;
      move(i, j, c);
    } else {
      m[i][j] = '.';

      if (c - 1 < 0) {
        c = 3;
      } else {
        c = (c - 1) % 4;
      }

      move(i, j, c);
    }

    // dbg(c);

    // for (int k = 0; k < h; k++) {
    //   for (int l = 0; l < w; l++) {
    //     cout << m[k][l] << " ";
    //   }
    //   cout << endl;
    // }

    // cout << endl;
  }

  for (i = 0; i < h; i++) {
    for (j = 0; j < w; j++) {
      cout << m[i][j];
    }
    cout << endl;
  }

  return 0;
}