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

  int n;
  cin >> n;

  vector<pair<int, int>> acoes(n);

  for (int i = 0; i < n; i++) {
    int d, p;
    cin >> d >> p;
    acoes[i] = {d, p};
  }

  double best = 0;

  int d, p;

  for (int i = 0; i < n; i++)
  {

    auto [x, y] = acoes[i];

    double aux = (double) x / (double) y;

    if(aux > best) {
      best = aux;
      d = x;
      p = y;
    }

  }

  cout << d << " " << p << endl;
  

  return 0;
}