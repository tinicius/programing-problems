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

#define MAX (int)2 * 1e5 + 10

vector<pair<int, int>> v(MAX);
vector<pair<int, int>> seg(4 * MAX);

pair<int, int> inter(pair<int, int> a, pair<int, int> b) {
  return {max(a.first, b.first), min(a.second, b.second)};
}

pair<int, int> build(int p, int l, int r) {
  if (l == r) return seg[p] = v[l];

  int m = (l + r) / 2;

  return seg[p] = inter(build(2 * p, l, m), build(2 * p + 1, m + 1, r));
}

pair<int, int> update(int i, pair<int, int> x, int p, int l, int r) {
  if (i < l or i > r) return seg[p];
  if (l == r) return seg[p] = x;

  int m = (l + r) / 2;

  return seg[p] = inter(update(i, x, 2 * p, l, m),
                        update(i, x, 2 * p + 1, m + 1, r));
}

pair<int, int> query(int a, int b, int p, int l, int r) {
  if (b < l or a > r) return {-LINF, LINF};
  if (a <= l and r <= b) return seg[p];

  int m = (l + r) / 2;

  return inter(query(a, b, 2 * p, l, m), query(a, b, 2 * p + 1, m + 1, r));
};

int main() {
  _;

  int n, q;
  cin >> n >> q;

  for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

  build(1, 0, n - 1);

  // for (int i = 1; i <= 10; i++) cout << i << " = " << seg[i] << endl;

  while (q--) {
    char o;
    cin >> o;

    if (o == 'C') {
      int i, l, r;
      cin >> i >> l >> r;
      i--;
      update(i, {l, r}, 1, 0, n - 1);
    } else {
      int a, b;
      cin >> a >> b;

      a--;
      b--;

      auto [x, y] = query(a, b, 1, 0, n - 1);

      if (x > y) {
        cout << 0 << endl;
        continue;
      }

      cout << (y - x) + 1 << endl;
    }
  }

  return 0;
}