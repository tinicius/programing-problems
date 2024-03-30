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

#define MAX (ll)5 * 1e5 + 10

ll n;

struct Item {
  ll drawdown;
  ll maior;
  ll menor;

  ll left;

  double percentual;
  ll r;
  ll s;
};

vector<Item> seg(4 * MAX);

void build(vector<ll>& a, ll v, ll tl, ll tr) {
  if (tl == tr) {
    seg[v] = {0, a[tl], a[tl], a[tl], 0, 0, a[tl]};
  } else {
    ll tm = (tl + tr) / 2;
    build(a, v * 2, tl, tm);
    build(a, v * 2 + 1, tm + 1, tr);

    ll drop = max({seg[v * 2].drawdown, seg[v * 2 + 1].drawdown,
                   seg[v * 2].maior - seg[v * 2 + 1].menor});

    seg[v] = {drop,
              max({seg[v * 2].maior, seg[v * 2 + 1].maior}),
              min(seg[v * 2].menor, seg[v * 2 + 1].menor),
              seg[v * 2].left,
              (double)drop / seg[v * 2].left,
              drop,
              seg[v * 2].left};
  }
}

Item query(ll v, ll tl, ll tr, ll l, ll r) {
  // dbg(v);
  // dbg(seg[v].r);
  // dbg(seg[v].s);

  if (r < tl or tr < l) return {0, 0, LINF, 0, 0, 0, 0};

  if (l <= tl and tr <= r) return seg[v];

  ll tm = (tl + tr) / 2;

  auto a = query(v * 2, tl, tm, l, min(r, tm));
  auto b = query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);

  ll r_i, s_i;

  if (a.percentual > b.percentual) {
    r_i = a.r;
    s_i = a.s;
  } else {
    r_i = b.r;
    s_i = b.s;
  }

  // dbg(r_i);
  // dbg(s_i);

  return {max({a.drawdown, b.drawdown, a.maior - b.menor}),
          max(a.maior, b.maior),
          min(a.menor, b.menor),
          a.left == 0 ? b.left : a.left,
          max(a.percentual, b.percentual),
          r_i,
          s_i
  };
}

// void update(ll v, ll tl, ll tr, ll pos, ll new_val) {
//   if (tl == tr) {
//     t[v] = new_val;
//   } else {
//     ll tm = (tl + tr) / 2;
//     if (pos <= tm)
//       update(v * 2, tl, tm, pos, new_val);
//     else
//       update(v * 2 + 1, tm + 1, tr, pos, new_val);
//     t[v] = t[v * 2] + t[v * 2 + 1];
//   }
// }

int main() {
  _;

  cin >> n;

  vector<ll> p(n);
  for (auto& p_i : p) cin >> p_i;

  ll q;
  cin >> q;

  build(p, 1, 0, n - 1);

  // for (int i = 1; i <= 14; i++)
  // {
  //   cout << i << " " << seg[i].r << endl;
  // }
  

  while (q--) {
    ll l, r;
    cin >> l >> r;

    auto ans = query(1, 0, n - 1, l - 1, r - 1);

    // cout << ans.drawdown << " " << ans.maior << " " << ans.menor << " ";

    dbg(ans.r);
    dbg(ans.s);

    if (ans.drawdown == 0) {
      cout << "0 0 1" << endl;
      continue;
    }

    ll x = gcd(ans.r, ans.s);

    while (x != 1) {
      ans.r /= x;
      ans.s /= x;

      x = gcd(ans.r, ans.s);
    }

    cout << ans.drawdown << " " << ans.r << " " << ans.s << endl;
  }

  return 0;
}