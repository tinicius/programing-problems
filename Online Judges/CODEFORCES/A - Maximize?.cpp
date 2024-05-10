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

string ord(string& s) {
  vector<ll> cnt(1000);

  for (auto c : s) {
    cnt[c]++;
  }

  string o;

  for (char i = 'a'; i <= 'z'; i++) {
    while (cnt[i]--) o.push_back(i);
    while (cnt[i - 32]--) o.push_back(i - 32);
  }

  return o;
}

int main() {
  _;

  int t;
  cin >> t;

  while (t--) {
    int x;
    cin >> x;

    int y;

    int aux = 0;

    for (int i = x - 1; i >= 1; i--) {
      int calc = gcd(x, i) + i;

      // dbg(calc);
      //
      if (calc >= aux) {
        y = i;
        aux = calc;
      }
    }

    cout << y << endl;
  }

  return 0;
}