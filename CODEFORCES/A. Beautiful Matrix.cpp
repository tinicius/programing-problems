#include <iostream>

using namespace std;

#include <math.h>

int main() {

    int posI;
    int posJ;

    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
            
            int num; 
            cin >> num;

            if (num == 1) {
                posI = i;
                posJ = j;
                break;
            }
            
        }
        
    }
    
    int res = 0;
    res += abs(posI - 2);
    res += abs(posJ - 2);

    cout << res;

}