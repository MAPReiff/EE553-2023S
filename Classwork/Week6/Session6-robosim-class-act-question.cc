#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class robot {
	private:
		string name;
		double x, y;

	public:
		robot(string n, double xx, double yy): name(n), x(xx), y(yy) {
		}
		friend ostream &operator<<(ostream &os, const robot &r) {
			os << "robot " << r.name << " " << r.x << " " << r.y;
			return os;
		}
};

class beacon {
	private:
		string name;
		double x, y;

	public:
		beacon(string n, double xx, double yy): name(n), x(xx), y(yy) {
		}
		friend ostream &operator<<(ostream &os, const beacon &b) {
			os << "beacon " << b.name << " " << b.x << " " << b.y;
			return os;
		}
};


int main() {

	ifstream f;
	char buffer[4096];
	f.open("robosim.txt");
	if (f.fail()) {
		cerr << "error opening the file" << endl;
		return 1;
	}

	vector<beacon> beacons;
	vector<robot> robots;

	string line;
	while (getline(f, line)) {
		stringstream ss(line);
		string type;
		ss >> type;
		if (type == "beacon") {
			string name;
			double x, y;
			ss >> name >> x >> y;
			beacons.push_back(beacon(name, x, y));
		} else if (type == "robot") {
			string name;
			double x, y;
			ss >> name >> x >> y;
			robots.push_back(robot(name, x, y));
		}
	}

	cout << "Beacons:" << endl;
	for (const auto &b : beacons) {
		cout << b << endl;
	}

	cout << "Robots:" << endl;
	for (const auto &r : robots) {
		cout << r << endl;
	}

	f.close();
	return 0;
}
