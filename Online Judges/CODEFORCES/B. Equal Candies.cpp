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

    while (t--) {
        
        vector<int> boxes;

        int n;
        cin >> n;

        int menor = INF;

        for (int i = 0; i < n; i++) {
            int num; cin >> num;

            if(num < menor) {
                menor = num;
            }

            boxes.push_back(num);
        }

        int eat = 0;

        for (int i = 0; i < n; i++) {
            eat += boxes[i] - menor;
        }
    
        cout << eat << endl;
    }
       
    
	return 0;
}