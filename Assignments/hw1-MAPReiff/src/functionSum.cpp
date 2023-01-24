#include "functionSum.h"

using namespace std;

/*
Problem1:
=========

Write C++ code that sum the numbers from 1 to 100

Problem2:
=========

a. Write C++ code that sum reciprocals (1/1 + 1/2 + … + 1/99 + 1/100)
b. Write C++ code that sum reciprocals (1/100 + 1/99 + ... 1/2 + 1/1)

compare a and b

Problem3:
=========
a. Write C++ code that sum multiplication reciprocals (1/1*1 + 1/2*2 + … ) \
b. Write C++ code that sum reciprocals (1/100*100 + 1/99*99 + ... )

*/


int sumUpTo(int x) {
	// I am confused by the problem. Problem 1 says to sum 1 to 100, however,
	// the function seems to be wanting us to sum up to an input value.
	// If this were sum 1 to 100, it would be a for loop i=0; i<100 where
	// sum += i;
	int sum = 0;
	for (int i = 0; i <= x; i++) {
		sum += (x - i);
	}
	return sum;
}

float sumReciprocalNormal(int x) {
	float sum = 0.0;
	for (int i = 1; i < x + 1; i++) {
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
