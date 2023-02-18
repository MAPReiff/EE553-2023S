#include <iostream>


using namespace std;

// Write functions for problem one here

void ReadElements(int *A, int n) {
	// write your code here
	cout << "Please enter the elements:";
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
}
void PrintElements(int *A, int n) {
	// write your code here
	for (int i = 0; i < n; i++) {
		if (i == n - 1) {
			cout << A[i] << endl;
		} else {
			cout << A[i] << ", ";
		}
	}
}
void PrintElementsRev(int *A, int n) {
	// write your code here
	for (int i = n - 1; i > -1; i--) {
		if (i == 0) {
			cout << A[i] << endl;
		} else {
			cout << A[i] << ", ";
		}
	}
}
void OddsOnly(int *A, int n, int *&odds, int &m) {
	// write your code here
	m = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] % 2 != 0) {
			m++;
		}
	}

	// count how many odd number you have

	cout << "there are " << m << " odd numbers" << endl;

	// allocate odds new array for odds in memory equal number of odd's number we found
	odds = new int[m];
	int c = 0;

	for (int i = 0; i < n; i++) {
		if (A[i] % 2 != 0) {
			odds[c] = A[i];
			c++;
		}
	}

  cout << "odd numbers: ";
  for (int i = 0; i < m; i++) {
    cout << odds[i] << ", ";
  }
  cout << endl;

	// Now fill the odds numbers in the new array
	// fill odds
	// index: 0 1 2 3
	// A    : 1 4 2 5
	// new index:     0 1
	// odds:          1 5
	// actual index:  0 3


	// Use you function PrintElements in main.cpp to print new odds array odds and m number
}
