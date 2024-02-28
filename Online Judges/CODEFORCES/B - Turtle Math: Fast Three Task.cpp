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

int solve(vector<ll>& a) {
  ll sum = 0;
  for (auto a_i : a) sum += a_i;

  if (sum % 3 == 0) {
    return 0;
  }

  for (auto a_i : a) {
    if ((sum - a_i) % 3 == 0) {
      return 1;
    }
  }

  ll last = ((sum / 3) * 3) + 3;

  return last - sum;
}

int main() {
  _;

  ll t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (auto& a_i : a) cin >> a_i;

    cout << solve(a) << endl;
  }

  return 0;
}