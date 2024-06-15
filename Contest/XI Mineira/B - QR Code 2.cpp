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

typedef vector<vector<char>> vvc;

void print(vvc& a) {
  for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < a.size(); j++) cout << a[i][j] << " ";
    cout << endl;
  }

  cout << endl;
}

void rotate(vvc& a, vvc b) {
  int n = a.size();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      a[i][j] = b[n - j - 1][i];
    }
  }
}

bool equal(vvc& a, vvc& b) {
  int n = a.size();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] != b[i][j]) return false;
    }
  }

  return true;
}

bool check(vvc a, int mx) {
  vvc m1 = vvc(mx, vector<char>(mx));
  vvc m2 = vvc(mx, vector<char>(mx));
  vvc m3 = vvc(mx, vector<char>(mx));

  int n = a.size();

  for (int i = 0; i < mx; i++) {
    for (int j = 0; j < mx; j++) {
      m1[i][j] = a[i][j];
      m2[i][j] = a[i][n - mx + j];
      m3[i][j] = a[n - mx + i][n - mx + j];
    }
  }

  // print(m1);
  // print(m2);
  // print(m3);

  rotate(m1, m1);

  if (!equal(m1, m2)) return false;

  rotate(m1, m1);

  if (!equal(m1, m3)) return false;

  return true;
}

int main() {
  _;

  int n;
  cin >> n;

  vector<vector<char>> a(n, vector<char>(n));
  vector<vector<char>> r1(n, vector<char>(n));
  vector<vector<char>> r2(n, vector<char>(n));
  vector<vector<char>> r3(n, vector<char>(n));
  vector<vector<char>> r4(n, vector<char>(n));

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> a[i][j];

  rotate(r1, a);
  rotate(r2, r1);
  rotate(r3, r2);
  rotate(r4, r3);

  int l = 0;
  int r = (n / 2) + 1;

  while (l + 1 < r) {
    int m = (l + r) / 2;

    if (check(a, m)) {
      l = m;
      continue;
    }

    if (check(r1, m)) {
      l = m;
      continue;
    }

    if (check(r2, m)) {
      l = m;
      continue;
    }

    if (check(r3, m)) {
      l = m;
      continue;
    }

    if (check(r4, m)) {
      l = m;
      continue;
    }

    r = m;
  }

  cout << l << endl;
};