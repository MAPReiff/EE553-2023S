#include <cmath>
#include <iostream>

using namespace std;

int sumUpTo(int x) {
	int sum = 0;
	for (int i = 0; i <= x; i++) {
		sum += (x - i);
		// sum += i;
	}
	return sum;
}


float sumReciprocalNormal(int x) {
	float sum = 0.0;
	for (int i = 1; i <= x; i++) {
		sum += ((float)1 / (float)i);
	}
	return sum;
}

float sumReciprocalRev(int x) {
	float sum;
	for (int i = 1; i <= x; x--) {
		sum += ((float)1 / (float)x);
	}
	return sum;
}


float sumMysteryNormal(int x) {
	float sum = 0.0;
	for (int i = 1; i <= x; i++) {
		sum += ((float)1 / ((float)i * (float)i));
	}
	return sum;
}

float sumMysteryRev(int x) {
	float sum;
	for (int i = 1; i <= x; x--) {
		sum += ((float)1 / ((float)x * (float)x));
	}
	return sum;
}


int main() {
	cout << sumUpTo(3) << '\n';

	cout << sumReciprocalNormal(100) << '\n';
	cout << sumReciprocalRev(100) << '\n';

	cout << sumMysteryNormal(100) << '\n';
	cout << sumMysteryRev(100) << '\n';

	return 0;
}