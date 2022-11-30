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

  vector<ll> sub1;
  vector<ll> sub2;

  sub1.push_back(n);
  sub2.push_back(n - 1);

  ll sum1 = n;
  ll sum2 = n - 1;

  for (ll i = n - 2; i >= 1; i--) {

    if (sum2 <= sum1) {
      sum2 += i;
      sub2.push_back(i);
    } else {
      sum1 += i;
      sub1.push_back(i);
    }
  }

  if (sum1 == sum2) {
    cout << "YES" << endl;
    cout << sub1.size() << endl;
    for (auto i : sub1)
      cout << i << " ";
    cout << endl;
    cout << sub2.size() << endl;
    for (auto i : sub2)
      cout << i << " ";
    cout << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}