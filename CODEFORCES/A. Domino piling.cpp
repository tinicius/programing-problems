#include <iostream>

using namespace std;

int main() {
    
    int m, n;
    cin >> m;
    cin >> n;

    int resto = 0;
    int pecas = 0;

    for (int i = 0; i < m; i++) {
        
        resto += n%2;
        pecas += n/2;

    }

    pecas += resto/2;     


    cout << pecas;
}