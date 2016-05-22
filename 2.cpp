#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num) {
	if(num <= 1) {
		return false;
	}

	if(num == 2) {
		return true;
	}

	for(int i = 2; i <= sqrt(num); i++) {
		if(num%i == 0)
			return false;
	}

	return true;
}

int main()
{
	int numLines;
	cin >> numLines;
	for(int i = 0; i < numLines; i++) {
		int a, b;
		cin >> a >> b;
		for(int j = a; j <= b; j++) {
			if(isPrime(j)) {
				cout << j << "\n";
			}
		}
	}

}

