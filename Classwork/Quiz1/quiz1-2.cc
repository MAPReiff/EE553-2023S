#include <iostream>

using namespace std;

class Complex {

	public:
		int a;

		int b;

		Complex(int x, int y) {

			a = x;

			b = y;
		}

		Complex operator+(Complex const &obj) {

			Complex res(a + obj.a, b + obj.b);

			return res;
		}
};


int main() {

	int xa;

	int ya;

	int xb;

	int yb;

	cout << "Please enter the first complex number on 2 lines: " << endl;

	cin >> xa >> ya;

	cout << "Please enter the second complex number on 2 lines: " << endl;

	cin >> xb >> yb;

	Complex numA(xa, ya);

	Complex numB(xb, yb);


	Complex final = numA + numB;

	cout << final.a << ", " << final.b << endl;

	return 0;
}