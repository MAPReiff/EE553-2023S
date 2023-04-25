
#include <iostream>
#include <string>
using namespace std;
class Course {
	private:
		int code;
		int hours;

	public:
		Course() {
		}
		Course(int c, int h = 2) {
			setCode(c);
			setHourse(h);
		}
		~Course() {
		}
		void setCode(int c) {
			code = c > 0 ? c : 0;
		}
		void setHourse(int h) {
			hours = h > 0 ? h : 0;
		}
		int getCode() {
			return code;
		}
		void print() {
			cout << "Code: " << code << ", Hours: " << hours << endl;
		}
};
class Teacher {
	private:
		Course *cArr[20];
		int count;

	public:
		Teacher() {
			count = 0;
		}
		// ~Teacher() {
		// }
		// bonus constructor - sends courses to point to them
		//Teacher(Course* inArr[],int n)
		Teacher(Course *inArr[], int n) {
			count = 0;
			for (int i = 0; i < n; i++) {
				AddCourse(inArr[i]);
			}
		}
		~Teacher() {
			for (int i = 0; i < count; i++) {
				delete cArr[i];
			}
		}

		void AddCourse(Course *pc) {
			cArr[count] = pc;
			count++;
		}
		void DropCourse(int code) {
			for (int i = 0; i < count; i++) {
				if (cArr[i]->getCode() == code) {
					cArr[i] = cArr[count - 1];
					cArr[count - 1] - NULL;
					count--;
					break;
				}
			}
		}
		void print() {
			cout << "Count: " << count << "," << endl;
			for (int i = 0; i < count; i++) {
				cArr[i]->print();
			}
		}
};
int main() {
	Course c1(100, 1);
	c1.print();
	Course c2(200);
	c2.print();
	Course c3(300, 3);
	c3.print();
	Course c4(400, 4);
	c4.print();
	cout << "##########" << endl;
	Teacher t1;
	t1.AddCourse(&c1);
	t1.print();
	t1.AddCourse(&c2);
	t1.print();
	t1.AddCourse(&c3);
	t1.print();
	t1.AddCourse(&c4);
	t1.print();
	cout << "##########" << endl;
	t1.DropCourse(200);
	t1.print();
	t1.DropCourse(400);
	t1.print();
	t1.DropCourse(100);
	t1.print();
	t1.DropCourse(300);
	t1.print();
	cout << "##########" << endl;
	Course *inArr[2];
	inArr[0] = &c1;
	inArr[1] = &c2;
	cout << "#####bonus#####" << endl;
	Teacher t2(inArr, 2);
	t2.print();
	return 0;
}
/*
// Steps to follow:
// 1. Include the code below inside the  main function
// 2. Create the appropriate constructor inside Teacher class
// 3. Execute the entire code and makes sure its free of bugs 
Course* inArr[2];
inArr[0] = &c1,
inArr[1] = &c2;
cout << "#####bonus#####" << endl;
Teacher t2 (inArr,2);
t2.print();
*/