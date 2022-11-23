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

  int n;
  cin >> n;

  vector<string> names;
  set<string> myset;

  while (n--) {

    string name;
    cin >> name;

    names.push_back(name);
  }

  for (int i = names.size() - 1; i >= 0; i--) {

    if (!myset.count(names[i]) > 0) {
      myset.insert(names[i]);
      cout << names[i] << " ";
    }
  }

  return 0;
}