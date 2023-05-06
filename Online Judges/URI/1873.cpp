#include "iostream"
using namespace std;

int main() {

    int c;
    cin >> c;

    for (int i = 0; i < c; i++) {
        
        string p1;
        string p2;

        cin >> p1;
        cin >> p2;

        if (p1 == p2) {
            cout << "empate\n";
            continue;
        }

        if(p1 == "pedra" && (p2 == "tesoura" || p2 == "lagarto")) {
            cout << "rajesh\n";
            continue;
        }
        
        if(p1 == "papel" && (p2 == "pedra" || p2 == "spock")) {
            cout << "rajesh\n";
            continue;
        }

        if(p1 == "tesoura" && (p2 == "papel" || p2 == "lagarto")) {
            cout << "rajesh\n";
            continue;
        }

        if(p1 == "lagarto" && (p2 == "spock" || p2 == "papel")) {
            cout << "rajesh\n";
            continue;
        }

        if(p1 == "spock" && (p2 == "tesoura" || p2 == "pedra")) {
            cout << "rajesh\n";
            continue;
        }

        cout << "sheldon\n";

    }
    

}