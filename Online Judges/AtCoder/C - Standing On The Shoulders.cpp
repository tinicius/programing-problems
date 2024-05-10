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

bool compare(pair<ll, ll>& a, pair<ll, ll>& b) {
  if (a.first == b.first) {
    return a.second < b.second;
  }

  return a.first > b.first;
}

int main() {
  _;

  ll n;
  cin >> n;

  vector<ll> s(n);
  vector<ll> h(n);

  for (ll i = 0; i < n; i++) {
    cin >> s[i] >> h[i];
  }

  ll sum = accumulate(s.begin(), s.end(), (ll)0);

  ll ans = 0;

  for (ll i = 0; i < n; i++) {
    ans = max(ans, sum - s[i] + h[i]);
  }

  cout << ans << endl;

  return 0;
}