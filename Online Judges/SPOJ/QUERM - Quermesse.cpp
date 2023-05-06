#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    int count = 0;
    int n;

    do {

        cin >> n;

        if (n == 0)
            break;
        
        int win;

        cout << "Teste " << count + 1 << endl;

        for (int i = 0; i < n; i++) {

            int s;
            cin >> s;

            if (s == (i + 1)) {
                win = s;
            }
           
        }
        
        cout << win << endl;

        count++;
    } while (n != 0);
    
    
    return 0;
}