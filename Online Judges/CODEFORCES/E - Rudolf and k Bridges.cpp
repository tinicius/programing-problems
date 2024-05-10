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

struct Item {
  ll value;
};

vector<ll> dp;

Item compare(Item a, Item b) {
  if (a.value < b.value)
    return a;
  else
    return b;
}

ll n, m, k, d;
vector<vector<ll>> a;

Item t[(ll)(4 * 2e5)];

void build(vector<ll>& p, ll v, ll tl, ll tr) {
  if (tl == tr) {
    t[v] = {p[tl]};
  } else {
    ll tm = (tl + tr) / 2;
    build(p, v * 2, tl, tm);
    build(p, v * 2 + 1, tm + 1, tr);
    t[v] = compare(t[v * 2], t[v * 2 + 1]);
  }
}

Item sum(ll v, ll tl, ll tr, ll l, ll r) {
  if (l > r) return {LINF};
  if (l == tl && r == tr) {
    return t[v];
  }
  ll tm = (tl + tr) / 2;

  return compare(sum(v * 2, tl, tm, l, min(r, tm)),
                 sum(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
}

void update(ll v, ll tl, ll tr, ll pos, ll new_val) {
  if (tl == tr) {
    t[v] = {new_val};
  } else {
    ll tm = (tl + tr) / 2;
    if (pos <= tm)
      update(v * 2, tl, tm, pos, new_val);
    else
      update(v * 2 + 1, tm + 1, tr, pos, new_val);
    t[v] = compare(t[v * 2], t[v * 2 + 1]);
  }
}

int main() {
  // _;

  ll te;
  cin >> te;

  while (te--) {
    cin >> n >> m >> k >> d;

    a = vector<vector<ll>>(n, vector<ll>(m));

    for (ll i = 0; i < n; i++) {
      for (ll j = 0; j < m; j++) {
        cin >> a[i][j];
      }
    }

    vector<ll> line;

    for (ll i = 0; i < n; i++) {
      dp = vector<ll>(m);

      dp[0] = 1;

      for (ll l = 1; l < min(d + 1, m); l++) dp[l] = 2 + a[i][l];

      build(dp, 1, 0, m - 1);

      for (ll l = d + 1; l < m; l++) {
        auto seg = sum(1, 0, m - 1, l - (d + 1), l - 1);

        dp[l] = seg.value + a[i][l] + 1;

        update(1, 0, m - 1, l, dp[l]);
      }

      line.push_back(dp[m - 1]);
    }

    // for (auto l : line) dbg(l);
    // cout << endl;

    vector<ll> sum(n);
    sum[0] = line[0];

    for (ll i = 1; i < n; i++) {
      sum[i] = sum[i - 1] + line[i];
    }

    ll cost = LINF;

    for (ll i = 0; i <= n - k; i++) {
      if (i == 0)
        cost = min(cost, sum[i + (k - 1)]);
      else
        cost = min(cost, sum[i + (k - 1)] - sum[i - 1]);
    }

    cout << cost << endl;
  };

  return 0;
};