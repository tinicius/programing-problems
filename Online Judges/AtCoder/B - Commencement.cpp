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

  string s;
  cin >> s;

  unordered_map<char, int> x;

  int maior = 0;

  for (auto i : s) {
    x[i]++;
    maior = max(maior, x[i]);
  }

  for (int i = 1; i <= maior; i++) {
    int aux = 0;

    for (char c = 'a'; c <= 'z'; c++) {
      if (x[c] == i) aux++;
    }

    if (aux != 2 and aux != 0) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}