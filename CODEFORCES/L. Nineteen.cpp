#include <bits/stdc++.h>
#include <cmath>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    string line;
    cin >> line;

    vector<double> tam = {};

    double n = (round(count(line.begin(), line.end(), 'n') / 2)) - 1;
    double i = count(line.begin(), line.end(), 'i');
    double e = (count(line.begin(), line.end(), 'e')) / 3.0;
    double t = count(line.begin(), line.end(), 't') / 1.0;

    tam.push_back(n);
    tam.push_back(i);
    tam.push_back(e);
    tam.push_back(t);

    int menor = 0;

    for (int i = 0; i < tam.size(); i++) {

        if(tam[i] == 0) {
            cout << 0 << endl;
            return 0;
        }

        if(tam[i] < 0) {
            continue;
        }

        if (menor == 0) {
            menor = tam[i];
        }
        
        if (tam[i] < menor) {
            menor = tam[i];
        }
    }
    
    cout << menor;
    
    return 0;
}