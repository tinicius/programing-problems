#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;

#define MAX (int)1e5

int v[MAX];
int seg[4 * MAX];  // Não esquecer do quatro 4x !!!!!!!

int build(int p, int l, int r) {
  if (l == r) return seg[p] = v[l];

  int m = (l + r) / 2;

  return seg[p] = min(build(2 * p, l, m), build(2 * p + 1, m + 1, r));
}

int query(int a, int b, int p, int l, int r) {
  if (b < l or a > r) return INF;
  if (a <= l and r <= b) return seg[p];
  int m = (l + r) / 2;

  return min(query(a, b, 2 * p, l, m), query(a, b, 2 * p + 1, m + 1, r));
}

int update(int i, int x, int p, int l, int r) {
  if (i < l or r < i) return seg[p];
  if (l == r) return seg[p] = x;

  int m = (l + r) / 2;

  return seg[p] =
             min(update(i, x, 2 * p, l, m), update(i, x, 2 * p + 1, m + 1, r));
}