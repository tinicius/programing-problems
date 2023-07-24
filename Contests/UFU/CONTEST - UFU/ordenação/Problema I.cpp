#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main() { _
    int n;
    
    while (cin >> n) {
        
        if (!isPrime(n)) {
            cout << n << " " << "nao primo\n"; 
            continue;
        }

        string num = to_string(n);
        reverse(num.begin(), num.end());
        int reverse = stoi(num);
        
        if (n == reverse) {
            cout << n << " " << "primo\n"; 
            continue;
        }

        if (!isPrime(reverse)) {
            cout << n << " " << "primo\n"; 
            continue;
        }

        cout << n << " " << "omirp\n"; 
        
    }
    
    return 0;
}