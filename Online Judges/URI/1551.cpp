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

  int t;
  cin >> t;

  cin.ignore();

  while (t--) {
    string frase;
    getline(cin, frase);

    map<char, int> cnt;

    for (auto c : frase) {
      if (c >= 'a' and c <= 'z') cnt[c]++;
    }

    int aux = 0;

    for (char i = 'a'; i <= 'z'; i++)
      if (cnt[i]) aux++;

    if (aux == 26) {
      cout << "frase completa" << endl;
    } else if (aux >= 13) {
      cout << "frase quase completa" << endl;
    } else {
      cout << "frase mal elaborada" << endl;
    }
  }

  return 0;
};