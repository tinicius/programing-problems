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

#define MAX 1e5 + 10

vector<ll> a(MAX);

vector<ll> t(4 * MAX);

void build(ll v, ll tl, ll tr) {
  if (tl == tr) {
    t[v] = a[tl];
  } else {
    ll tm = (tl + tr) / 2;
    build(v * 2, tl, tm);
    build(v * 2 + 1, tm + 1, tr);
    t[v] = 0;
  }
}

void update(ll v, ll tl, ll tr, ll l, ll r, ll add) {
  if (l > r) return;
  if (l == tl && r == tr) {
    a[l] += add;
    t[v] += add;
  } else {
    ll tm = (tl + tr) / 2;
    update(v * 2, tl, tm, l, min(r, tm), add);
    update(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, add);
  }
}

ll get(ll v, ll tl, ll tr, ll pos) {
  if (tl == tr) return t[v];
  ll tm = (tl + tr) / 2;
  if (pos <= tm)
    return t[v] + get(v * 2, tl, tm, pos);
  else
    return t[v] + get(v * 2 + 1, tm + 1, tr, pos);
}

vector<ll> t2(4 * MAX, 0);

void update2(ll v, ll tl, ll tr, ll l, ll r, ll add) {
  if (l > r) return;
  if (l == tl && r == tr) {
    t2[v] += add;
  } else {
    ll tm = (tl + tr) / 2;
    update2(v * 2, tl, tm, l, min(r, tm), add);
    update2(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, add);
  }
}

ll get2(ll v, ll tl, ll tr, ll pos) {
  if (tl == tr) return t2[v];
  ll tm = (tl + tr) / 2;
  if (pos <= tm)
    return t2[v] + get2(v * 2, tl, tm, pos);
  else
    return t2[v] + get2(v * 2 + 1, tm + 1, tr, pos);
}

vector<vector<ll>> u(MAX, vector<ll>(3));

vector<ll> r(MAX, 0);

int main() {
  _;

  ll n, m, k;
  cin >> n >> m >> k;

  // O(n)
  for (ll i = 0; i < n; i++) cin >> a[i];

  // O(4*n)
  build(1, 0, n - 1);

  // O(m)
  for (ll i = 0; i < m; i++) {
    ll l_i, r_i, d_i;
    cin >> l_i >> r_i >> d_i;

    l_i--;
    r_i--;

    u[i] = {l_i, r_i, d_i};
  }

  // O(k * log m)
  while (k--) {
    ll x, y;
    cin >> x >> y;

    x--;
    y--;

    update2(1, 0, m - 1, x, y, 1);
  }

  for (int i = 0; i < m; i++) {
    auto g = get2(1, 0, m - 1, i);

    if (g > 0) {
      update(1, 0, n - 1, u[i][0], u[i][1], g * u[i][2]);
    }
  }

  for (ll i = 0; i < n; i++) cout << get(1, 0, n - 1, i) << " ";
  cout << endl;

  return 0;
}