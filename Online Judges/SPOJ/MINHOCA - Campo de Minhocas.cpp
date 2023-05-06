#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    int lin, col;
    cin >> lin;
    cin >> col;

    int soma = 0;
    int pos = 0;

    vector<vector<int> > matriz;

    for (int i = 0; i < lin; i++) {
        
        int aux = 0;

        vector<int> line;
        
        for (int j = 0; j < col; j++) {
            int num; cin >> num;
            line.push_back(num);
            aux += num;
        }

        matriz.push_back(line);  

        if (aux >= soma) {
            soma = aux;
        }
        
    }

    for (int i = 0; i < col; i++) {

        int aux = 0;
        
        for (int j = 0; j < lin; j++) {
            aux += matriz[j][i];
        }

        if (aux >= soma) {
            soma = aux;
        }
        
    }
    
    cout << soma << endl;

    return 0;
}