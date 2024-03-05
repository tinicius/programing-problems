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

void solve(vector<string>& linhas) {
  for (auto& linha : linhas) {
    int h = 0;
    int p;

    vector<int> count(10, 0);

    for (int i = 0; i < 9; i++) {
      if (linha[i] == '#') {
        h++;
        p = i;
      } else {
        count[linha[i] - '0']++;
      }
    }

    if (h == 1) {
      for (int i = 1; i <= 9; i++) {
        if (count[i] == 0) {
          linha[p] = i + '0';
          break;
        }
      }
    }
  }

  for (int j = 0; j < 9; j++) {
    string column;

    for (int i = 0; i < 9; i++) {
      column += linhas[i][j];
    }

    int h = 0;
    int p;
    vector<int> count(10, 0);

    for (int k = 0; k < 9; k++) {
      if (column[k] == '#') {
        h++;
        p = k;
      } else {
        count[column[k] - '0']++;
      }
    }

    if (h == 1) {
      for (int i = 1; i <= 9; i++) {
        if (count[i] == 0) {
          column[p] = i + '0';
          break;
        }
      }
    }

    for (int i = 0; i < 9; i++) {
      // column += linhas[i][j];
      linhas[i][j] = column[i];
    }
  }
}

int main() {
  _;

  vector<string> s(9);

  for (int i = 0; i < 9; i++) {
    getline(cin, s[i]);
  }

  vector<string> linhas;

  for (auto r : s) {
    string aux;

    for (auto c : r) {
      if (c != ' ') aux += c;
    }

    linhas.push_back(aux);
  }

  vector<vector<vector<int>>> m(9, vector<vector<int>>(9, vector<int>()));

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      vector<int> count(10, 0);

      for (int k = 0; k < 9; k++) {
        if (linhas[i][k] != '#') {
          count[linhas[i][k] - '0']++;
        }
      }

      for (int k = 1; k <= 9; k++) {
        if (count[k] == 0) m[i][j].push_back(k);
      }

      count.clear();

      for (int k = 0; k < 9; k++) {
        if (linhas[k][j] != '#') {
          count[linhas[k][j] - '0']++;
        }
      }

      for (int k = 1; k <= 9; k++) {
        if (count[k] == 0) m[i][j].push_back(k);
      }
    }
  }

  return 0;
}