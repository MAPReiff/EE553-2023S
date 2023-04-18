// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// 1. Create header file for UndergraduateStudent. This header file should have class UndergraduateStudent
    //inheritance between UndergraduateStudent and Student class
    // have unique data member numberOfWorking (int)
    // have constructor that will call the non-default contstructor of Student
    // creat display function that call display function of the student and print numberOfWorking
// 2. Excericise the creation of UndergraduateStudent object inside main function
    // call the display function

#include <iostream>
#include "Student.h"
#include "PostGraduateStudent.h"
#include <iostream>
#include <string>
#include "UndergraduateStudent.h"

int main()
{
    Student s1;
    // re-usablity of the code using inheritiance
    s1.display();
    cout << "##############" << endl;
    s1.set_age(30);
    s1.set_name("Dong");
    s1.set_gender("male");
    
    // call default constructor of base class (derived class has no constructor
   
    s1.display();
    cout << "##############" << endl;

    s1.set_depart("ECE");
    s1.set_GPA(3.5);
    
    
    // call non-default constructor - order of constructors calling
    Student s2("Matt", "Male", 25, 5, 3.5, "ECE");
    
    // call display function -> function over-ridding
    s2.display(); // s2 has a display function - in this case ignore display in parent 
    cout << "##############" << endl;

    //multi-inheritance (grand - parent - child)
    PostGraduateStudent ps ("Dave", "Male", 20, 7, 3.9, "ECE", "Nano_Tech");
    ps.display();

    // Student s3;
    UndergraduateStudent ugs("Mitchell", "Male", 21, 4, 3.45, "ECE", 13);
    ugs.display();

    
    
    
}
