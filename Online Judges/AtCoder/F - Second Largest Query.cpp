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

#define MAX (ll)(2 * 1e5 + 10)

ll v[4 * MAX];

ll g[4 * MAX];
ll g_f[4 * MAX];
ll s[4 * MAX];
ll s_f[4 * MAX];

void add(vector<pair<ll, ll>>& aux, pair<ll, ll> p) {
  for (auto& a_i : aux) {
    if (a_i.first == p.first) {
      a_i.second += p.second;
      return;
    }
  }

  aux.push_back(p);
}

void build(ll p, ll l, ll r) {
  if (l == r) {
    g[p] = v[l];
    g_f[p] = 1;

    s[p] = 0;
    s_f[p] = 0;
    return;
  }

  ll m = (l + r) / 2;

  build(2 * p, l, m);
  build(2 * p + 1, m + 1, r);

  vector<pair<ll, ll>> aux;

  add(aux, {g[2 * p], g_f[2 * p]});
  add(aux, {s[2 * p], s_f[2 * p]});
  add(aux, {g[2 * p + 1], g_f[2 * p + 1]});
  add(aux, {s[2 * p + 1], s_f[2 * p + 1]});

  ll g_1 = g[2 * p];

  sort(aux.begin(), aux.end());

  if (aux.size() > 1) {
    ll e = aux.size();

    g[p] = aux[e - 1].first;
    g_f[p] = aux[e - 1].second;
    s[p] = aux[e - 2].first;
    s_f[p] = aux[e - 2].second;
  } else {
    g[p] = aux[0].first;
    g_f[p] = aux[0].second;
    s[p] = 0;
    s_f[p] = 0;
  }
}

vector<ll> query(ll a, ll b, ll p, ll l, ll r) {
  if (b < l or a > r) return {0, 0, 0, 0};
  if (a <= l and r <= b) return {g[p], g_f[p], s[p], s_f[p]};

  ll m = (l + r) / 2;

  auto q1 = query(a, b, 2 * p, l, m);
  auto q2 = query(a, b, 2 * p + 1, m + 1, r);

  vector<pair<ll, ll>> aux;

  add(aux, {q1[0], q1[1]});
  add(aux, {q1[2], q1[3]});
  add(aux, {q2[0], q2[1]});
  add(aux, {q2[2], q2[3]});

  sort(aux.begin(), aux.end());

  if (aux.size() > 1) {
    ll e = aux.size();

    return {aux[e - 1].first, aux[e - 1].second, aux[e - 2].first,
            aux[e - 2].second};

  } else {
    return {aux[0].first, aux[0].second, 0, 0};
  }
}

void update(ll i, ll x, ll p, ll l, ll r) {
  if (i < l or r < i) return;
  if (l == r) {
    g[p] = x;
    g_f[p] = 1;

    s[p] = 0;
    s_f[p] = 0;

    return;
  }

  ll m = (l + r) / 2;

  update(i, x, 2 * p, l, m);
  update(i, x, 2 * p + 1, m + 1, r);

  vector<pair<ll, ll>> aux;

  add(aux, {g[2 * p], g_f[2 * p]});
  add(aux, {s[2 * p], s_f[2 * p]});
  add(aux, {g[2 * p + 1], g_f[2 * p + 1]});
  add(aux, {s[2 * p + 1], s_f[2 * p + 1]});

  sort(aux.begin(), aux.end());

  if (aux.size() > 1) {
    ll e = aux.size();

    g[p] = aux[e - 1].first;
    g_f[p] = aux[e - 1].second;
    s[p] = aux[e - 2].first;
    s_f[p] = aux[e - 2].second;
  } else {
    g[p] = aux[0].first;
    g_f[p] = aux[0].second;
    s[p] = 0;
    s_f[p] = 0;
  }
}

int main() {
  _;

  ll n, q;
  cin >> n >> q;

  for (ll i = 0; i < n; i++) cin >> v[i];

  build(1, 0, n - 1);

  // for (ll i = 1; i <= 9; i++)
  //   cout << i << ": " << g[i] << " " << g_f[i] << " " << s[i] << " " <<
  //   s_f[i]
  //        << endl;

  while (q--) {
    ll o;
    cin >> o;

    if (o == 1) {
      ll p, x;
      cin >> p >> x;

      update(p - 1, x, 1, 0, n - 1);

      // for (ll i = 1; i <= 9; i++)
      //   cout << i << ": " << g[i] << " " << g_f[i] << " " << s[i] << " "
      //        << s_f[i] << endl;
    } else {
      ll l, r;
      cin >> l >> r;

      l--;
      r--;

      if (l == r) {
        cout << 0 << endl;
        continue;
      }

      auto ans = query(l, r, 1, 0, n - 1);

      cout << ans[3] << endl;
    }
  }

  return 0;
}