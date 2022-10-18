#include "iostream"
using namespace std;

int main() {

	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		
		long long x;
		cin >> x;

		bool isPrime = true;

		for(long long j=2; j*j <= x; j++) {
			if(x % j == 0) isPrime = false;
		}

		if(isPrime)
			cout << "Prime" << endl;
		else
			cout << "Not Prime" << endl;

	}

}
