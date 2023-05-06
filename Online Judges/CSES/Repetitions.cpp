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

int main() {
  _;

  string word;
  cin >> word;

  char last = word[0];
  int size = 1;

  int maior = 1;

  for (int i = 1; i < word.size(); i++) {

    if (word[i] == last)
      size++;
    else
      size = 1;

    last = word[i];

    if (size > maior)
      maior = size;
  }
  cout << maior << endl;
  return 0;
}