#include "iostream"
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        
        string a, b;
        cin >> a;
        cin >> b;

        string end;

        for (int j = a.length() - b.length(); j < a.length(); j++) {
            end.append(string(1, a[j]));
        }

        if (end == b) {
            cout << "encaixa\n";
        } else {
            cout << "nao encaixa\n";
        }
        
    }

}