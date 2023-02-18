#include <iostream>
#include <time.h>

using namespace std;


// complete the JulianDate class
// write your code in the JulianDae class
// complete the code in main
class JulianDate {
		// Make all your class access is public

		// first define your variable type and variable (year, month, day, hour, mins, sec)
	public:
		double year;
		double month;
		double day;
		double hour;
		double mins;
		double sec;

		// write your default constructor that set variables today's date
		// write your code here
		// Name it JulianDate
		JulianDate() {
			year = 2023;
			month = 2;
			day = 17;
			hour = 18;
			mins = 4;
			sec = 23;
		}


		// Write your nod-default constructor that set variables
		// write your code here
		// the Name should be the same as default constructor
		JulianDate(
			int yearIn, int monthIn, int dayIn, int hourIn, int minsIn,
			int secIn) {
			year = yearIn;
			month = monthIn;
			day = dayIn;
			hour = hourIn;
			mins = minsIn;
			sec = secIn;
		}


		// write function that calculate julian number from given date
		// your function should return the value
		// use calc_juliandate as the function name
		// write your code here
		double calc_juliandate() {
			int dayCalc = (14 - month) / 12;
			int monthCalc = month + 12 * dayCalc - 3;
			int yearCalc = year + 4800 - dayCalc;

			double result;
			result = day + ((153 * monthCalc + 2) / 5) + 365 * yearCalc +
					 (yearCalc / 4) - (yearCalc / 100) + (yearCalc / 400) -
					 32045.5;
			result = result + (hour * 60 * 60 + mins * 60 + sec) / 86400;
			return result;
		}


		// write function that calculate difference between two Julian date
		// use diff_calc_juliandate as the function name
		// write your code here

		double diff_calc_juliandate(double in) {
			return calc_juliandate() - in;
		}
};

/*
	how many days in a year? 365
	leap year: if year MOD 4 == 0 LEAP EXCEPT
	           if year MOD 100 == 0 NOT LEAP YEAR Except
						 if year MOD 400 == 0 LEAP

Leap years:
 NO 1900
 YES 1904
 YES 1908
 YES 2000
 NO 2100
 YES 2400

days since EPOCH = 365 * (year - 2000) + years/4 - ....

2018 - 2000 = 18

seconds in a day = 24*60*60 = 86400

hh:mm:ss

00:00:00  0.0
12:00:00  0.5

18*365+18/4 - 18/100 + 18/400
18*364+4 = 6574

6574.041666666 --> Jan 1, 2018, 01:00:00
 */
//int JulianDate::EPOCH = 2000; // Jan.1 2000, 00:00:00 = 0

int main() {

	cout << "########" << endl;
	cout << "Main Problem" << endl;
	cout << "########" << endl;

	// Run your class on this code and calculate the difference of Julian number below

	cout.precision(20);
	JulianDate x(
		2007, 2, 8, 0, 0,
		0); // how many days since day 0? dy = (2018 - 2000) * 365
	double x1 = x.calc_juliandate();
	cout << x1 << endl;


	JulianDate y(2000, 12, 31, 0, 0, 1);
	double y1 = y.calc_juliandate();
	cout << y1 << endl;

	//manual calculation of the difference between two dates, e.g., x1 - y1 = results
	//print out the result
	// write your code here
	cout << "manual difference between days: " << x1 - y1 << endl;

	// Now use your class function to find the difference between two dates
	// print out the result
	// write your code here
	cout << "function use difference of days: " << x.diff_calc_juliandate(y1)
		 << endl;


	//example of date to Julian date format without hour/min/sec
	//7/4/1776   2369916
	//12/31/2000 2451910
	//2/8/2007   2454140
	//2/9/2007   2454141

	cout << "====[ end ]====" << endl;

	return 0;
}
