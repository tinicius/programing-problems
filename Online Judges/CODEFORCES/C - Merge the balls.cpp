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
  for (auto& ai : a) cin >> ai;

  vector<ll> seq;

  for (ll i = 0; i < n; i++) {
    // for (auto t : seq) cout << t << " ";
    // cout << endl;

    seq.push_back(a[i]);

    if (seq.size() <= 1) continue;

    while (seq.size() >= 2 and seq[seq.size() - 1] == seq[seq.size() - 2]) {
      int y = seq[seq.size() - 1];

      seq.pop_back();
      seq.pop_back();

      seq.push_back(y + 1);
    }
  }

  // for (auto i : seq) cout << i << " ";
  // cout << endl;

  cout << seq.size() << endl;

  return 0;
}