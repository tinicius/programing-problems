#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int dias(int ano, int mes, int dia) {

    ano = abs(ano);
    mes = abs(mes);
    dia = abs(dia);

    int dias = 0;

    for (int i = 1970; i < ano; i++) {
       if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
            dias += 366;
        } else {
            dias += 365;
        }
    }
    
    for (int i = 1; i < mes; i++) {
        if (i == 2) {   
            dias += 28;
        } else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            dias += 31;
        } else {
            dias += 30;
        }
    }
        
    dias += dia;

    return dias;
}
 
int main() { _
 
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            
            int ano, mes, dia;
            int dias1 = 0;
            int dias2 = 0;

            cin >> ano;
            cin >> mes;
            cin >> dia;

            dias1 = dias(ano, mes, dia);

            cin >> ano;
            cin >> mes;
            cin >> dia;

            dias2 = dias(ano, mes, dia);

            cout << abs(dias2 - dias1) << endl;
        }
         
		return 0;
}