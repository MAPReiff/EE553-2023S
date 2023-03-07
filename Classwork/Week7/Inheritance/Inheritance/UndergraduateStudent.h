#pragma once
#include "Student.h"

#include <string>
using namespace std;

class UndergraduateStudent: public Student {
	private:
		int numberOfWorking;

	public:
		void set_numberOfWorking(int numb) {
			numberOfWorking = numb;
		}
		int get_numberOfWorking() {
			return numberOfWorking;
		}
		UndergraduateStudent(
			string n, string g, float a, int l, float gpa, string d, int numb):
			Student(n, g, a, l, gpa, d) {
			numberOfWorking = numb;
		}
		void display() {
			Student::display();
			cout << " number of working= " << numberOfWorking << endl;
		}
};