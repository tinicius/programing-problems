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

  vector<string> a(5);

  for (int i = 0; i < 5; i++) cin >> a[i];

  vector<vector<int>> mapa(4, vector<int>(7));

  for (int i = 0; i <= 3; i++) {
    for (int j = 0; j <= 6; j++) {
      // dbg(a[i][j]);
      mapa[i][j] = a[i][j] - '0';
    }
  }

  vector<int> lrc(4);
  vector<int> vrc;

  for (int i = 0; i <= 3; i++) lrc[i] = a[i][7] - '0';
  for (int j = 0; j <= 6; j++) vrc.push_back(a[4][j] - '0');

  int l_error;

  for (int i = 0; i <= 3; i++) {
    int aux = 0;

    for (int j = 0; j <= 6; j++) {
      if (mapa[i][j] == 1) aux++;
    }

    if (aux % 2 == 0 and lrc[i] == 1)
      l_error = i;
    else if (aux % 2 != 0 and lrc[i] == 0)
      l_error = i;
  }

  int v_error;

  for (int j = 0; j <= 6; j++) {
    int aux = 0;

    for (int i = 0; i <= 3; i++)
      if (mapa[i][j] == 1) aux++;

    if (aux % 2 == 0 and vrc[j] == 1)
      v_error = j;
    else if (aux % 2 != 0 and vrc[j] == 0)
      v_error = j;
  }

  // dbg(l_error);
  // dbg(v_error);

  if (a[l_error][v_error] == '0')
    a[l_error][v_error] = '1';
  else
    a[l_error][v_error] = '0';

  for(auto i : a) cout << i << endl;

  // for (int i = 0; i <= 3; i++) {
  //   for (int j = 0; j <= 6; j++) {
  //     cout << mapa[i][j];
  //   }

  //   cout << endl;
  // }

  return 0;
}