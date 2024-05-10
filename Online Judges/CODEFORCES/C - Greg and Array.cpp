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

const ll MAX = 4 * 1e5;

vector<ll> t(MAX, 0);

void build(ll v, ll tl, ll tr) {
  if (tl == tr) {
    t[v] = 0;
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

//

vector<ll> t2(MAX, false);

vector<ll> a(1e5);

void build2(ll v, ll tl, ll tr) {
  if (tl == tr) {
    t2[v] = a[tl];
  } else {
    ll tm = (tl + tr) / 2;
    build2(v * 2, tl, tm);
    build2(v * 2 + 1, tm + 1, tr);
    t2[v] = 0;
  }
}

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

int main() {
  _;

  ll n, m, k;
  cin >> n >> m >> k;

  for (int i = 0; i < n; i++) cin >> a[i];

  vector<pair<ll, ll>> op_limits(m);
  vector<ll> opv_values(m);

  for (ll i = 0; i < m; i++) {
    cin >> op_limits[i].first >> op_limits[i].second >> opv_values[i];

    op_limits[i].first--;
    op_limits[i].second--;
  }

  build(1, 0, m - 1);

  while (k--) {
    ll l, r;
    cin >> l >> r;

    l--;
    r--;

    update(1, 0, m - 1, l, r, 1);
  }

  // for (ll i = 0; i < m; i++) {
  //   ll qnt = get(1, 0, m - 1, i);

  //   cout << qnt << " ";
  // }
  // cout << endl;

  build2(1, 0, n - 1);

  for (ll i = 0; i < m; i++) {
    ll qnt = get(1, 0, m - 1, i);

    if (qnt == 0) continue;

    // cout << i << " " << qnt << endl;

    update2(1, 0, n - 1, op_limits[i].first, op_limits[i].second,
            qnt * opv_values[i]);
  }

  for (ll i = 0; i < n; i++) {
    ll ai = get2(1, 0, n - 1, i);

    cout << ai << " ";
  }

  cout << endl;

  return 0;
}