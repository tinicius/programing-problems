#include "iostream"
using namespace std;

int numberOfLeds(int num) {
    switch (num) {
    case 0:
        return 6;
        break;
    case 1:
        return 2;
        break;
    case 2:
        return 5;
        break;
    case 3:
        return 5;
        break;
    case 4:
        return 4;
        break;
    case 5:
        return 5;
        break;
    case 6:
        return 6;
        break;
    case 7:
        return 3;
        break;
    case 8:
        return 7;
        break;
    case 9:
        return 6;
        break;

    default:
        break;
    }
}

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {

        string line;
        cin >> line;

        int leds = 0;

        for (int j = 0; j < line.length(); j++) {
            int number = stoi(string(1, line[j]));
            leds += numberOfLeds(number);
        }
        
        cout << leds << " leds\n";

    }

}