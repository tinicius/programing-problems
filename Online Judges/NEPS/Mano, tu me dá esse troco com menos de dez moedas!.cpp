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

vector<int> dp(1e4);

vector<int> v(1001);

int n, m;

int solve(int x) {
  if (x < 0) return INF;
  if (x == 0) return 0;
  if(dp[x])return dp[x];

  int aux = INF;

  for (int i = 0; i < n; i++) aux = min(aux, solve(x - v[i]));

  return dp[x] = aux + 1;
}

int main() {
  _;

  cin >> n >> m;

  for (int i = 0; i < n; i++) cin >> v[i];

  if(solve(m) < 10) {
    cout << "S" << endl; 
  } else {
    cout << "N" << endl;
  }

  return 0;
}