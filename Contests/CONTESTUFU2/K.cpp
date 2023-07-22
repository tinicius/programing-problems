#include <cmath>
#include <iomanip>
#include <iostream>

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using namespace std;

int main() {
    _ double n;
    cin >> n;
    double a, c;
    double b, d;
    cout << fixed;

    while (n--) {
        cin >> a >> b >> c >> d;
        cout << setprecision(2) << fixed
             << floor((((d - b) / (c - a)) * 100)) / 100 << endl;
    }

    return 0;
}
