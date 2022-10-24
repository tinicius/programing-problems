#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main() { _
    int n, n1, aux;


    while(n != 0) {
        aux = n % 10;
        n1 = n1 * 10 + aux;
        n /= 10;
    }

    cin >> n;
    if(isPrime(n1)){
        cout << n << "omirp" << endl;
        goto fim;
    }
    else if(isPrime(n)){
        cout << n << "primo" << endl;
        goto fim;
    }else{
        cout << n << "nao primo" << endl;
        goto fim;
    }

    fim:

    return 0;
}