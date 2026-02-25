#include <iostream>

using namespace std;

class Date {
	int day, month, year;
public :
	Date(int Day, int Month, int Year) : day(Day), year(Year) {
		if (Month > 0 && Month < 13)
			month = Month;
		else {
			month = 1;
			cout << "Invalid birth month. Setting 1" << endl;
		}
	}
	void check_date() {
		cout << "Valid date : " << day << '/' << month << '/' << year << endl;
	}
};

int main() {
	Date date1(10, 13, 2006);
	Date date2(10, 5, 2007);
	date1.check_date();
	date2.check_date();
	return 0;
}