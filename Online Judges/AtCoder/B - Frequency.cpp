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

  string s;
  cin >> s;

  vector<ll> m((ll)'z' + 1, 0);

  ll aux = 0;

  for (char i : s) {
    m[(ll)i]++;
    aux = max(aux, m[(ll)i]);
  }

  for (ll i = 'a'; i <= 'z'; i++) {
    if (m[i] == aux) {
      cout << (char)i << endl;
      break;
    }
  }

  return 0;
}