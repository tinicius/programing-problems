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

int brute(string s) {
  set<string> aux;

  aux.insert(s);

  for (int i = 0; i < s.size(); i++) {
    for (int j = i; j < s.size(); j++) {
      string x = s;
      swap(x[i], x[j]);

      aux.insert(x);
    }
  }

  if (aux.size() == 1) return 1;

  return aux.size() - 1;
}

ll solve(string s) {
  bool sum = false;

  vector<int> cnt(125);

  for (auto c : s) cnt[c]++;

  for (int i = 'a'; i <= 'z'; i++)
    if (cnt[i] > 1) sum = true;

  vector<vector<ll>> m(1e6 + 10, vector<ll>(123, 0));

  ll n = s.size();

  m[n - 1][s[n - 1]] = 1;

  for (ll i = n - 2; i >= 0; i--) {
    m[i][s[i]]++;

    for (ll k = 'a'; k <= 'z'; k++) {
      m[i][k] += m[i + 1][k];
    }
  }

  ll ans = 0;

  for (ll i = 0; i < n - 1; i++) {
    ll aux = 0;

    for (ll k = 'a'; k <= 'z'; k++) {
      if (k == s[i]) continue;

      aux += m[i + 1][k];
    }

    ans += aux;
  }

  if (sum) ans++;

  return ans;
}

int main() {
  _;

  string s;
  cin >> s;

  // srand(time(NULL));

  // int t = 100;

  // while (t--) {
  //   cout << t << endl;
  //   string x;
  //   for (int i = 0; i < (rand() % (ll)100) + 2; i++) {
  //     int r = ((int)'a');
  //     r += rand() % 26;

  //     x += (char)r;
  //   }

  //   if (brute(x) != solve(x)) {
  //     dbg(x);
  //     return 1;
  //   }
  // }

  cout << solve(s) << endl;
  // cout << brute(s) << endl;

  return 0;
}