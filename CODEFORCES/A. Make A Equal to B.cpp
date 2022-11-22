#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
	#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        
        int tam; cin >> tam;

        vector<int> a;
        vector<int> b;

        for (int i = 0; i < tam; i++) {
            int num; cin >> num;
            a.push_back(num);
        }
        
        for (int i = 0; i < tam; i++) {
            int num; cin >> num;
            b.push_back(num);
        }

        int moves = 0;

        for (int i = 0; i < tam; i++) {
            if (a[i] != b[i]) {
                moves++;
            }
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        // for (int i = 0; i < tam; i++) {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
    
        // for (int i = 0; i < tam; i++) {
        //     cout << b[i] << " ";
        // }
        // cout << endl;

        int moves2 = 1;

        for (int i = 0; i < tam; i++) {
            if (a[i] != b[i]) {
                moves2++;
            }
        }

        if (moves <= moves2) {
            cout << moves << endl;
        } else {
            cout << moves2 << endl;
        }
        
    }
    
    
    
	return 0;
}