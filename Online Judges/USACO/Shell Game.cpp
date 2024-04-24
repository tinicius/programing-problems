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

  int n;
  cin >> n;

  vector<int> case1(4);
  case1[1] = 1;

  vector<int> case2(4);
  case2[2] = 1;

  vector<int> case3(4);
  case3[3] = 1;

  vector<int> ans(4);

  while (n--) {
    int a, b, g;
    cin >> a >> b >> g;

    swap(case1[a], case1[b]);
    swap(case2[a], case2[b]);
    swap(case3[a], case3[b]);

    if (case1[g] == 1) ans[1]++;
    if (case2[g] == 1) ans[2]++;
    if (case3[g] == 1) ans[3]++;
  }

  cout << max({ans[1], ans[2], ans[3]}) << endl;

  return 0;
}