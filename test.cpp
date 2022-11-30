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

void printVector(vector<int> items) {

  for (int i = 0; i < items.size(); i++) {
    cout << items[i] << " ";
  }

  cout << endl;
}

int main() {
  _;

  int n = 5;
  vector<int> arr = {0, 2, 3, 4, 7};

  auto k = lower_bound(arr.begin(), arr.begin() + n, 5);

  // dbg(k);
  dbg(*k);

  return 0;
}