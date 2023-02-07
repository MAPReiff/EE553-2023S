#include <iostream>
#include <math.h>
using namespace std;
//r, theta = rect2Polar(x, y)

void rect2Polar(double x, double y, double &c, double &ang) {
	c = sqrt(x * x + y * y);
	ang = atan2(y, x);
	x = 99;
}

// for homework (class activity)
void polar2Rect(double r, double theta, double &x, double &y) {
	//insert your code here
	x = r * cos(theta);
	y = r * sin(theta);
}

int main() {
	double x = 3, y = 4;
	double r, theta;
	rect2Polar(x, y, r, theta);
	cout << x << ' ' << y << '\n'; // x is still 3!!
	cout << r << " " << theta << '\n';
	// call polar2Rect (class activity)
	// insert your code here
	polar2Rect(r, theta, x, y);

	cout << x << ' ' << y << '\n'; // x is still 3!!
	cout << r << " " << theta << '\n';
}
// call by reference for  r and theta help to retrieve their values from c and ang
// math.h is required due to the use of atan2 function∫
// homework
