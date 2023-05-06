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

  set<int> nums;

  for (int i = 0; i < (n - 1); i++) {
    int num;
    cin >> num;
    nums.insert(num);
  }

  for (int i = 1; i <= n; i++) {

    int size = nums.size();

    nums.insert(i);

    if (nums.size() > size) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}