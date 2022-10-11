#include "iostream"
using namespace std;

int main() { 

    int c;
    cin >> c;

    for(int i=0; i < c; i++) {

        string line;
        cin >> line;

        int n1 = 0;
        int n2 = 0;

        bool foundedK = false;

        for(int j=0; j < line.size(); j++) {

            if (line[j] == 'k')
                foundedK = true;
        
            if(line[j] != 'a') 
                continue;

            if(!foundedK) {
                n1++;
            } else {
                n2++;
            }
            
        }

        string res = "k";

        for(int j=0; j < (n1 * n2); j++) {
            res.append(string(1, 'a'));
        }

        cout << res << endl;

    }


} 