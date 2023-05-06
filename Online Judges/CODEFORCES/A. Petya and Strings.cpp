#include <iostream>

using namespace std;

int main() {

    string s1, s2;
    cin >> s1;
    cin >> s2;

    int tam = s1.length();
    int res;

    for (int i = 0; i < tam; i++) {
       
        if (s1[i] != s2[i]) {
            int asc1 = tolower(s1[i]);
            int asc2 = tolower(s2[i]);

            if (asc1 == asc2) {
                res = 0;
            }

            if (asc1 > asc2) {
                res = 1;
                break;
            }
            
            if (asc1 < asc2) {
                res = -1;
                break;
            }
            
        }
        
    }

    cout << res << endl;
    
}