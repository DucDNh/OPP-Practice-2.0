#include <iostream>

using namespace std;

class Car {
	string make, model;
	const int year;
public :
	Car(int Year, const string& Make, const string& Model) : year(Year), make(Make), model(Model) {
	}
	int get_year() {
		return year;
	}
};

int main() {
	Car car1(2020, "Toyoto", "Kirin");
	cout << car1.get_year();
	return 0;
}