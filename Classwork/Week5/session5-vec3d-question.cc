/*
1. The main() function has been given below, don't change it:
     Section 1: Create constructor/s to create the vec_3d objects.
     Section 2: Overload constructors.
     Section 3: Compute the operator overload for subtraction and addition and dot operators as a function inside the class.
     Section 5: Overload the << operator to output formatted Vec_3d objects.
                Example format: (1.0,2.5,3.5)


2.  General Grading Breakdown:
    Class data members: 10%
    Constructor/s: 20%
    Operator +: 20%
    Operator -: 10%
    Operator dot: 10%
    Operator <<: 20%
    Unmodified Main Function: 10%


*/

#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

class Vec_3d {
	private:
		double x;
		double y;
		double z;

	public:
		Vec_3d() {
			x = 0.0;
			y = 0.0;
			z = 0.0;
		}

		Vec_3d(double x_val, double y_val, double z_val) {
			x = x_val;
			y = y_val;
			z = z_val;
		}

		Vec_3d(double x_val, double y_val) {
			x = x_val;
			y = y_val;
			z = 0.0;
		}

		Vec_3d(double x_val) {
			x = x_val;
			y = 0.0;
			z = 0.0;
		}

		friend Vec_3d operator+(const Vec_3d &lhs, const Vec_3d &rhs) {
			return Vec_3d(lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z);
		}

		friend Vec_3d operator-(const Vec_3d &lhs, const Vec_3d &rhs) {
			return Vec_3d(lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z);
		}

		friend Vec_3d operator-(const Vec_3d &v) {
			return Vec_3d(-v.x, -v.y, -v.z);
		}

		friend double dot(const Vec_3d &lhs, const Vec_3d &rhs) {
			return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z;
		}

		friend ostream &operator<<(ostream &os, const Vec_3d &v) {
			os << "(" << fixed << setprecision(1) << v.x << "," << fixed
			   << setprecision(1) << v.y << "," << fixed << setprecision(1)
			   << v.z << ")";
			return os;
		}
};

int main() {
	cout << "Hello " << endl;
	Vec_3d v1(1.5, 2.2, -3.1);
	Vec_3d v2(-2.2, 1.2);
	Vec_3d v3(5.6);
	Vec_3d v4;

	Vec_3d v5 = v1 + v2;
	Vec_3d v6 = v1 - v3;

	Vec_3d v7 = dot(v1, v2);
	Vec_3d v8 = -v2;

	cout << v1 << '\n'
		 << v2 << '\n'
		 << v3 << '\n'
		 << v4 << '\n'
		 << v5 << '\n'
		 << v6 << '\n'
		 << v7 << '\n'
		 << v8 << '\n';
	// changed this last line as the template used /n instead of \n
}
