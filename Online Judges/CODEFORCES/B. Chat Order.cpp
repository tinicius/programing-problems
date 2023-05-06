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

  unordered_set<string> names;
  vector<string> chatlist;

  while (n--) {

    string name;
    cin >> name;

    chatlist.push_back(name);
  }

  // for (int i = chatlist.size() - 1; i >= 0; i--) {
  //   names.insert(chatlist[i]);
  // }

  for (auto name : chatlist) {
    cout << name << " ";
    names.insert(name);
  }
  cout << endl;
  for (auto it : names) {
    cout << it << " ";
  }

  return 0;
}