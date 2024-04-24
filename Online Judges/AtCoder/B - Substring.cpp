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

  string w;
  cin >> w;

  int n = w.size();
  
set<string> ans;

  for (int s = 0; s < n; s++)
  {
    
    for (int e = 1; e < n + 1; e++)
    {
      string sub = w.substr(s, e);
      ans.insert(sub);
    }
  
  }

  cout << ans.size() << endl;
  
  return 0;
}