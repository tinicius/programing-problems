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

#define MAX (int)1e5

vector<int> v(MAX, INF);
vector<pair<int, int>> seg(4 * MAX);

pair<int, int> compare(pair<int, int> a, pair<int, int> b) {
  if (a.first < b.first) return a;
  if (b.first < a.first) return b;

  return {a.first, a.second + b.second};
}

pair<int, int> build(int p, int l, int r) {
  if (l == r) return seg[p] = {v[l], 1};

  int m = (l + r) / 2;

  return seg[p] = compare(build(2 * p, l, m), build(2 * p + 1, m + 1, r));
}

pair<int, int> query(int a, int b, int p, int l, int r) {
  if (b < l or a > r) return {INF, 0};
  if (a <= l and r <= b) return seg[p];

  int m = (l + r) / 2;

  return compare(query(a, b, 2 * p, l, m), query(a, b, 2 * p + 1, m + 1, r));
}

pair<int, int> update(int i, int x, int p, int l, int r) {
  if (i < l or r < i) return seg[p];
  if (l == r) {
    seg[p].first = x;
    return seg[p];
  }

  int m = (l + r) / 2;

  return seg[p] = compare(update(i, x, 2 * p, l, m),
                          update(i, x, 2 * p + 1, m + 1, r));
}

int main() {
  _;

  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) cin >> v[i];

  build(1, 0, n - 1);

  while (m--) {
    int o;
    cin >> o;

    if (o == 1) {
      int i, v;
      cin >> i >> v;

      update(i, v, 1, 0, n - 1);
    } else {
      int l, r;
      cin >> l >> r;

      auto [x, y] = query(l, r - 1, 1, 0, n - 1);

      cout << x << " " << y << endl;
    }
  }

  return 0;
}