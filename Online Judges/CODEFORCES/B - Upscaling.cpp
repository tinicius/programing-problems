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

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
        for (int j = 0; j < n; j++) {
          if (j % 2 == 0)
            cout << "##";
          else
            cout << "..";
        }

        cout << endl;

        for (int j = 0; j < n; j++) {
          if (j % 2 == 0)
            cout << "##";
          else
            cout << "..";
        }
      } else {
        for (int j = 0; j < n; j++) {
          if (j % 2 == 0)
            cout << "..";
          else
            cout << "##";
        }

        cout << endl;

        for (int j = 0; j < n; j++) {
          if (j % 2 == 0)
            cout << "..";
          else
            cout << "##";
        }
      }

      cout << endl;
    }
  }
  return 0;
}