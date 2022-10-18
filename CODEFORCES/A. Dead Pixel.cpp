#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int linha, coluna, x, y;
        cin >> linha;
        cin >> coluna;
        cin >> x;
        cin >> y;

        int mul;

        //linha 
        int sub1 = y - 0; 
        int sub2 = (coluna - 1) - y;

        if(sub1 >= sub2) {
            mul = sub1 * linha;
        } else {
            mul = sub2 * linha;
        }

        //coluna
        sub1 = x - 0;
        sub2 = (linha - 1) - x;
        
        int aux;

        if(sub1 >= sub2) {
            aux = sub1 * coluna;
        } else {
            aux = sub2 * coluna;
        }

        if(aux >= mul) {
            cout << aux << endl;
        } else {
            cout << mul << endl;
        }
    }
    
    
    
	return 0;
}