#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        
        int a, b;
        cin >> a;
        cin >> b;

        if (a % b == 0) {
            cout << 0 << endl;
            continue;
        }

        cout << ((a/b + 1) * b) - a << endl;
        
    }
    
	return 0;
}