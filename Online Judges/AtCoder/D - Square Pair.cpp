#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
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
  for (auto &i : a)
    cin >> i;

  vector<ll> cnt(2 * 1e5 + 10, 0);

  for (auto &a_i : a) {

    if (a_i == 0) {
      cnt[a_i] = n;
      continue;
    }

    for (ll i = 2; i * i <= a_i; i++) {

      ll p_s = i * i;

      while (p_s <= a_i && a_i % p_s == 0)
        a_i /= p_s;
    }

    cnt[a_i]++;
  }

  ll ans = 0;

  // for (ll i = 0; i <= 10; i++) {
  //   cout << i << ": " << cnt[i] << endl;
  // }

  for (auto a_i : a) {
    cnt[a_i]--;
    ans += cnt[a_i];
  }

  cout << ans << endl;

  return 0;
}