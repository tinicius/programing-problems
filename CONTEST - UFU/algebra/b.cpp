#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
	#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    int c, m;

    cin >> c >> m;

    int mul = 0;
    int a = 1;

    while (m--) {
        int num; cin >> num;
        mul += num;
    }
int y = 10;
    while (y--) {
        
        //if (mul * a >= c) {
            cout << (mul * a * c) << endl;
        //     break;
        // }

        a++;
        
    }
        
	return 0;
}