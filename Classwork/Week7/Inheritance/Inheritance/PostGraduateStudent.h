#pragma once
#include "Student.h"
#include <string>
using namespace std;

class PostGraduateStudent : public Student
{
private:
	string research_interest;
public:
	void set_research_interst(string rarea) {;
	research_interest = rarea;
	}
	string get_research_interest() {
		return research_interest;
	}
	PostGraduateStudent(string n, string g, float a, int l, float gpa, string d, string ra):Student(n,g,a,l,gpa,d){
		research_interest = ra;
	}
	void display() {
		Student::display(); // call displat of the parent
		cout << " research interest= " << research_interest << endl;

	}

};

