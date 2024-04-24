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

  vector<int> parents(2001, -1);

  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    parents[i + 1] = p;
  }

  vector<int> color(2001);

  for (int i = 1; i <= n; i++) {
    int a = i;

    while (parents[a] != -1) {
      color[i]++;

      a = parents[a];
    }
  }

  set<int> ans;

  for (int i = 1; i <= n; i++) {
    ans.insert(color[i]);
  }

  cout << ans.size() << endl;

  return 0;
}