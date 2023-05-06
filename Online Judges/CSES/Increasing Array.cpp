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

  vector<ll> nums;

  for (ll i = 0; i < n; i++) {
    ll num;
    cin >> num;
    nums.push_back(num);
  }

  ll maior = nums[0];
  ll moves = 0;

  for (ll i = 1; i < nums.size(); i++) {

    if (nums[i] >= maior)
      maior = nums[i];
    else
      moves += maior - nums[i];
  }

  cout << moves << endl;

  return 0;
}