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
        
        int n, q;
        cin >> n >> q;

        deque<int> evens;
        deque<int> odds;

        for (int i = 0; i < n; i++) {
            int num; cin >> num;

            if (num % 2 == 0) {
                evens.push_back(num);
            } else {
                odds.push_back(num);
            }
            
        }
        
        while (q--) {
            int k, value; 
            cin >> k >> value;

            if (k == 0) {
                
                for (auto it = evens.begin(); it != evens.end(); ++it) {
                    int aux = *it + value;

                    if (aux % 2 == 0) {
                        //evens.erase(it);
                        //evens.push_back(aux);
                        *it = aux;
                    } else {
                        evens.erase(it);
                        odds.push_back(aux);
                    }
                
                }

            } else {

                for (auto it = odds.begin(); it != odds.end(); ++it) {
                    int aux = *it + value;

                    if (aux % 2 != 0) {
                       // odds.erase(it);
                        //odds.push_back(aux);
                    } else {
                       // odds.erase(it);
                        evens.push_back(aux);
                    }
                
                }

            }

            deque<int>::iterator it;
            for (it = evens.begin(); it != evens.end(); ++it) {
                cout << *it << " ";
            }

            for (it = odds.begin(); it != odds.end(); ++it) {
                cout << *it << " ";
            }

            cout << endl;

        }
        


    }
    
    
	return 0;
}