#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    int n; cin >> n;
    int moves = 0;

    for (int i = 0; i < n; i++) {
        
        moves = 0;

        int a, b;
        cin >> a;
        cin >> b;

        while (a != b) {
            
            if (a > b) {
                int sum = a - b;

                if (sum % 2 == 0) {
                    a = a - sum;
                } else {
                    sum++;
                    a = a - sum;
                
                }

                moves++;
                        
            } else {

                int sum = b - a;

                if (sum % 2 != 0) {
                    a = a + sum;
                } else {
                    sum--;
                    a = a - sum;
                }

                moves++;

            }
            
        }

        cout << moves << endl;
        

    }
    
    
	return 0;
}