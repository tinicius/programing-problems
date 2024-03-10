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

  int n, m, l;

  cin >> n;
  vector<int> a(n);
  for (auto& a_i : a) cin >> a_i;

  cin >> m;
  vector<int> b(m);
  for (auto& b_i : b) cin >> b_i;
  
  cin >> l;
  vector<int> c(l);
  for (auto& c_i : c) cin >> c_i;

  set<int> sums;

  for (auto a_i : a) {
    for (auto b_i : b) {
      for (auto c_i : c) {
        sums.insert(a_i + b_i + c_i);
      }
    }
  }

  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;

    if (sums.find(x) != sums.end()) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}