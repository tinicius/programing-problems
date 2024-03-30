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
  // _;

  int n;
  cin >> n;

  vector<vector<int>> baloes;

  for (int i = 0; i < n; i++) {
    int a, b, c;
    cin >> a >> b >> c;

    baloes.push_back({a, b, c});
  }

  int aux = 0;

  int a, b, c;

  for (int i = 0; i < 256; i++) {
    for (int j = 0; j < 256; j++) {
      for (int k = 0; k < 256; k++) {
        int menor_distancia = INF;

        for (auto& b_i : baloes) {
          menor_distancia =
              min(menor_distancia,
                  abs(b_i[0] - i) + abs(b_i[1] - j) + abs(b_i[2] - k));
        }

        if (menor_distancia > aux) {
          aux = menor_distancia;
          a = i;
          b = j;
          c = k;
        }
      }
    }
  }

  cout << a << " " << b << " " << c << endl;

  return 0;
}