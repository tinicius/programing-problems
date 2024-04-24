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

  vector<int> nums(7);
  for (auto& a_i : nums) cin >> a_i;

  sort(nums.begin(), nums.end());

  int a = nums[0];
  int b = nums[1];
  int c = nums[6] - (a + b);

  cout << a << " " << b << " " << c << endl;

  return 0;
}