#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);

#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

int main() {
  _;

  ll n;
  cin >> n;

  string s;
  cin >> s;

  ll q;
  cin >> q;

  vector<ll> m(200, 0);

  while (q--) {
    char c, d;
    cin >> c >> d;

    if (m[c] == 0)
      m[c] = d;

    for (char i = 'a'; i <= 'z'; i++) {

      if (m[i] == c) {
        m[i] = d;
      }

      // cout << i << " " << (char)m[i] << endl;
    }
  }

  // for (char i = 'a'; i <= 'z'; i++) {
  //   cout << i << " " << (char)m[i] << endl;
  // }

  for (int i = 0; i < s.size(); i++) {

    // dbg(s[i]);
    // dbg((char)m[s[i]]);

    if (m[s[i]] != 0) {
      char aux = s[i];
      m[s[i]] = m[s[i]];

      s[i] = m[s[i]];
    }

    // dbg(s);
  }

  cout << s << endl;

  return 0;
}