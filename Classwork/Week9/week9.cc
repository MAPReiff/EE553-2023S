#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
class Shape { //abstract class
	private:
	public:
		virtual void print(ofstream &file) = 0; // pure virtual function
};

class Circle: public Shape {
	private:
		double radius;
		double x, y;

	public:
		Circle(double x, double y, double radius): x(x), y(y), radius(radius) {
		}

		void print(ofstream &file) {
			double start_angle = 0;
			double end_angle = 360;
			file << "G02 X" << x + radius << " Y" << y << " I0 J-" << radius
				 << " F200" << '\n';
			file << "G03 X" << x + radius << " Y" << y << " I0 J-" << radius
				 << " P" << end_angle << " F200" << '\n';
		}
};

class Square: public Shape {
	private:
		double x, y;
		double side;

	public:
		Square(double x, double y, double side): x(x), y(y), side(side) {
		}

		void print(ofstream &file) {
			double e = 0;
			double f = 0.5;
			file << "g0 x" << x << " y" << y << '\n';

			file << "g1 x" << x + side << " y" << y + 0 << " e" << e << '\n';
			e += side * f;

			file << "g1 x" << x + side << " y" << y + side << " e" << e << '\n';
			e += side * f;

			file << "g1 x" << x << " y" << y + side << " e" << e << '\n';
			e += side * f;

			file << "g1 x" << x << " y" << y << " e" << e << '\n';
			e += side * f;
		}
};

int main() {

	vector<Shape *> shapes;
	shapes.push_back(new Circle(0, 0, 3));
	shapes.push_back(new Square(0, 0, 2));

	ofstream file("output.gcode");
	if (file.is_open()) {
		for (auto s : shapes) {
			s->print(file);
		}
		file.close();
	} else {
		cerr << "Unable to open file" << endl;
	}
}
