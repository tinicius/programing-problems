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

  vector<int> aux;

  int n;

  while (cin >> n) {
    aux.push_back(n);

    if (n == 0) break;
  }

  reverse(aux.begin(), aux.end());

  for (auto i : aux) cout << i << endl;

  return 0;
}