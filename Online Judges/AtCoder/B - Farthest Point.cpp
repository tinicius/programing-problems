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

int main() {
  _;

  ll n;
  cin >> n;

  vector<pair<ll, ll>> points(n);
  for (auto& p : points) cin >> p.first >> p.second;

  for (int i = 0; i < n; i++) {
    auto pi = points[i];

    ll dist = 0;
    ll id;

    for (ll j = 0; j < n; j++) {
      if (i == j) continue;
      auto pj = points[j];

      ll d = ((pi.first - pj.first) * (pi.first - pj.first)) +
             ((pi.second - pj.second) * (pi.second - pj.second));

      if (d > dist) {
        dist = d;
        id = j + 1;
      }
    }

    cout << id << endl;
  }

  return 0;
}