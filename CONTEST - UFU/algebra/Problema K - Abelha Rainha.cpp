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

bool isPrime(int n) {

  if (n == 1 || n == 2)
    return true;

  if (n % 2 == 0)
    return false;

  for (int i = 3; i * i < n; i = i + 2) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

void divider(int *n, int *m, int div, vector<int> *divs) {

  while ((*n % div == 0) || (*m % div == 0)) {

    if (*n % div == 0 || *m % div == 0) {

      if (*n % div == 0 && *m % div == 0) {
        divs->push_back(div);
      }

      if (*n % div == 0)
        *n = *n / div;

      if (*m % div == 0)
        *m = *m / div;
    }
  }
}

int main() {
  _;

  int n, m;
  int auxn, auxm;
  cin >> n >> m;
  auxn = n;
  auxm = m;

  if (isPrime(n)) {

    if (m % n == 0) {
      cout << n / n << " " << m / n << " " << n << endl;
    } else {
      cout << "Fica na colmeia" << endl;
    }

  } else if (isPrime(m)) {

    if (m % n == 0) {
      cout << n / m << " " << m / m << " " << m << endl;
    } else {
      cout << "Fica na colmeia" << endl;
    }

  } else {

    int div = 2;
    vector<int> divs;

    while (n != 1 || m != 1) {

      divider(&n, &m, div, &divs);

      div++;

      while (!isPrime(div)) {
        div++;
      }
    }

    int sum = 1;

    for (auto i : divs) {
      sum *= i;
    }

    cout << auxn / sum << " " << auxm / sum << " " << sum << endl;
  }

  return 0;
}