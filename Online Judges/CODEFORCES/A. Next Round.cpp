#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, k;
    cin >> n;
    cin >> k;

    vector<int> grades = {};
    int res = 0;

    for (int i = 0; i < n; i++) {
        int g;
        cin >> g;
        grades.push_back(g);
    }

    for (int i = 0; i < n; i++) {
        if (grades[i] >= grades[k - 1] && grades[i] > 0) {
            res++;
        }
        
    }
    
    cout << res;
}