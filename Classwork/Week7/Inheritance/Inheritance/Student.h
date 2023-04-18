#pragma once
#include "Person.h"
class Student : public Person
{
private:
	int level;
	float GPA;
	string depart;
public:

	// explicity call non-default parent constructor 
	Student() {

	}
	Student(string n, string g, float a, int l, float gpa, string d) : Person(n, g, a) {
		//derived attributed
		level = l;
		GPA = gpa;
		depart = d;

	}
	void set_level(int l) {
		level = l;
	}
	void set_GPA(float gpa) {
		GPA = gpa;
	}
	void set_depart(string d) {
		depart = d;
	}

	int get_level() {
		return level ;
	}
	float get_GPA() {
		return GPA ;
	}
	string get_depart() {
		return depart;
	}

	void display() {
		//re-usablity of the base display
		Person::display();// display of the base class
		cout << "Depart= " << depart << " Level= " << level << " GPA=  " << GPA <<endl;
	
	}



};

