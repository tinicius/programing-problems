#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int x = 0;

    for (int i = 0; i < n; i++) {
        
        string line;
        cin >> line;

        if (line.find('+') != -1) {
            x++;
        } else {
            x--;
        }
        
    }
    
    cout << x;

}