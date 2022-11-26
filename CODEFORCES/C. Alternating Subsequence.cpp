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

  int t;
  cin >> t;

  while (t--) {

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
      cin >> nums[i];

    int maxsum = nums[0];
    int maxlength = 1;

    int sum = nums[0];
    int len = 1;

    for (int i = 1; i < n; i++) {

      if (nums[i - 1] > 0) {
        if (nums[i] < 0) {
          len++;

          if (len >= maxlength) {
            sum += nums[i] + nums[i - 1];
            maxlength = len;
            maxsum = max(maxsum, sum);
          } else {
            sum = nums[i];
            len = 0;
          }
        } else {
          sum = nums[i];
          len = 0;
        }
      } else if (nums[i - 1] < 0) {
        if (nums[i] > 0) {
          len++;

          if (len >= maxlength) {
            sum += nums[i] + nums[i - 1];
            maxlength = len;
            maxsum = max(maxsum, sum);
          } else {
            sum = nums[i];
            len = 0;
          }
        } else {
          sum = nums[i];
          len = 0;
        }
      }
    }
    dbg(maxsum);
  };

  return 0;
}