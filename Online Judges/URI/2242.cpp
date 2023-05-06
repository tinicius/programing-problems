#include "iostream"
using namespace std;

int main() {

    string line;
    cin >> line;

    string formated = "";
    string inverse = "";

    for (int i = 0; i < line.length(); i++) {
        
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u') {
            formated.append(string(1, line[i]));
        }
        
    }
        
    for (int k = formated.length() - 1; k >= 0; k--) {
        inverse.append(string(1, formated[k]));
    }

    if (formated == inverse) {
        cout << 'S';
    } else {
        cout << 'N';
    }
    

}