#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int resolves = 0;

    for (int i = 0; i < n; i++) {

        int can = 0;
        
        for (int j = 0; j < 3; j++) {
            int op;
            cin >> op;

            if (can == 2) {
                continue;
            }

            if (op == 1) {
                can++;
            }
                          
            if (can == 2) {
                resolves++;
            }
            
        }
        
    }
    
    cout << resolves << endl;
}