#include <iostream>

using namespace std;

class Complex {
	public:
		int a, b;
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
	// int x1, y1, x2, y2;
	string xS, xS2;
  cout << "Enter two complex numbers: " << endl;
	// cin >> x1 >> y1 >> x2 >> y2;
	cin >> xS >> xS2;

	int x1 = stoi(xS.substr(0, xS.find(", ")));
	int y1 = stoi(xS.substr(1, xS.find(", ")));

	int x2 = stoi(xS2.substr(0, xS2.find(", ")));
	int y2 = stoi(xS2.substr(1, xS2.find(", ")));

	Complex num1(x1, y1);
	Complex num2(x2, y2);
	Complex result = num1 + num2;
	cout << "Result = " << result.a << ", " << result.b << endl;
	return 0;
}