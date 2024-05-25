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

const ll M = 1e9 + 7;

ll expbin(ll a, ll e) {
  if (e == 0) return 1;

  if (e % 2 == 1) return (expbin(a, e - 1) * a) % M;

  ll b = expbin(a, e / 2);

  return (b * b) % M;
};

int main() {
  _;

  vector<ll> fat(1001);

  fat[0] = 1;
  for (ll i = 1; i <= 1000; i++) fat[i] = (i * fat[i - 1]) % M;

  string s;

  while (cin >> s) {
    ll n = s.size();

    vector<ll> cnt(26);
    for (auto c : s) cnt[c - 'A']++;

    ll div = 1;

    for (ll i = 0; i < 26; i++) {
      div = (div * max(fat[cnt[i]], (ll)1)) % M;
    }

    cout << (fat[n] * expbin(div, M - 2)) % M << endl;
  };

  return 0;
};