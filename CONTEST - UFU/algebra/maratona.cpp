#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
	#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool isPrime(int n) {

    if (n <= 1) {
        return false;
    }

    if (n == 2) {
        return true;
    } else if (n % 2 == 0) {
        return false;
    } else {
        for (int i = 3; i*i <= n; i = i + 2) {
            if (n % i == 0) {
                return false;
            }
            
        }  
    }

    return true;

}

int main() { _
 
    int n, m;

    while (scanf("%d %d", &n, &m) != EOF) {
 
        set<int> primes;
        
        if (n > m) {
        
        bool printou = false;
        bool tevePrimos = false;

        for (int i = n - 1; i > m; i--) {
            if (isPrime(i)) {

                tevePrimos = true;

                if(!printou) {
                    cout << i;
                    printou = true;
                    continue;
                }

                cout << ' ' << i;

            } 
        }
        
        // for (auto it = primes.rbegin(); it != primes.rend(); ++it) {
        // }

        if (!tevePrimos){
            cout << 0;
        }

        } else {

            set<int> primes;

            bool printou = false;
            bool tevePrimos = false;

            for (int i = n + 1; i < m; i++) {
                if (isPrime(i)) {

                    tevePrimos = true;

                    if(!printou) {
                        cout << i;
                        printou = true;
                        continue;
                    }

                    cout << ' ' << i;

                } 
            }
        
            if (!tevePrimos){
                cout << 0;
            }   

        }

        cout << endl;
     
    }
    
    
	return 0;
}