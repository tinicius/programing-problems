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

  vector<ll> a(n);
  for (auto& a_i : a) cin >> a_i;

  unordered_map<ll, ll> pos;

  for (ll i = 0; i < n; i++) {
    pos[a[i]] = i;
  }

  vector<pair<ll, ll>> ans;

  for (ll i = 0; i < n; i++) {
    if (a[i] != i + 1) {
      ll ai = a[i];
      ll p = pos[i + 1];

      ans.push_back({i + 1, pos[i + 1] + 1});

      swap(a[i], a[pos[i + 1]]);

      pos[i + 1] = i;
      pos[ai] = p;
    }
  }

  // for (auto i : a) cout << i << " ";
  // cout << endl;

  cout << ans.size() << endl;
  for (auto i : ans) cout << i.first << " " << i.second << endl;

  return 0;
}