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

long long area(ll bl_x, ll bl_y, ll tr_x, ll tr_y) {
  long long length = tr_y - bl_y;
  long long width = tr_x - bl_x;
  return length * width;
}

bool intersect(vector<ll> s1, vector<ll> s2) {
  ll bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
  ll bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];

  // no overlap
  if (bl_a_x >= tr_b_x || tr_a_x <= bl_b_x || bl_a_y >= tr_b_y ||
      tr_a_y <= bl_b_y) {
    return false;
  } else {
    return true;
  }
}

ll inter_area(vector<ll> s1, vector<ll> s2) {
  ll bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
  ll bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];

  return ((min(tr_a_x, tr_b_x) - max(bl_a_x, bl_b_x)) *
          (min(tr_a_y, tr_b_y) - max(bl_a_y, bl_b_y)));
}

vector<ll> inter_points(vector<ll> s1, vector<ll> s2) {
  ll x5 = max(s1[0], s2[0]);
  ll y5 = max(s1[1], s2[1]);

  ll x6 = min(s1[2], s2[2]);
  ll y6 = min(s1[3], s2[3]);

  if (x5 > x6 || y5 > y6) {
    return {};
  }

  ll x7 = x5;
  ll y7 = y6;

  ll x8 = x6;
  ll y8 = y5;

  return {
      min({x5, x6, x7, x8}),
      min({y5, y6, y7, y8}),
      max({x5, x6, x7, x8}),
      max({y5, y6, y7, y8}),
  };
}

int main() {
  _;

  vector<ll> w(4);
  vector<ll> b1(4);
  vector<ll> b2(4);

  for (ll i = 0; i < 4; i++) cin >> w[i];
  for (ll i = 0; i < 4; i++) cin >> b1[i];
  for (ll i = 0; i < 4; i++) cin >> b2[i];

  ll a_w = area(w[0], w[1], w[2], w[3]);

  ll wb1 = intersect(w, b1) ? inter_area(w, b1) : 0;
  ll wb2 = intersect(w, b2) ? inter_area(w, b2) : 0;

  // dbg(wb1);
  // dbg(wb2);

  ll ans = a_w - wb1 - wb2;

  if (intersect(b1, b2)) {
    if (intersect(w, inter_points(b1, b2)))
      ans += inter_area(w, inter_points(b1, b2));
  }

  // dbg(ans);

  if (ans <= 0)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;

  return 0;

  return 0;
}