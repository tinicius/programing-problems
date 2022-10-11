#include "iostream"
using namespace std;

#include "ctype.h"

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string line;
        string number;

        cin >> line;

        string temp_number = "";
        int result = 0;

        for(int j=0; j < 14; j++) {

            if (isdigit(line.c_str()[j])) {
                char caracter = line.at(j);
                temp_number += string(1, caracter);
            }
            
            if(!isdigit(line.c_str()[j + 1])) {

                if (temp_number.size() > 0) {
                    result += stoi(temp_number);
                }
                
                temp_number = "";
            }

        }
        
        cout << result << endl;
    }
    

}