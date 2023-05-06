#include <iostream>
using namespace std;

#include <vector>

bool isEven(int n) {

    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }

}

int main() {

    int w;
    cin >> w;

    vector<int> n1 = {};
    vector<int> n2 = {};

    for (int i = 1; i < w; i++) {
        n1.push_back(i);
    }

    for (int i = (w-1); i > 0; i--) {
        n2.push_back(i);
    }
    
    for (int i = 0; i < (w-1); i++) {
        
        if (isEven(n1[i]) && isEven(n2[i])) {
            cout << "YES\n";
            return 0;
        } 
        
    }

    cout << "NO\n";
        
}