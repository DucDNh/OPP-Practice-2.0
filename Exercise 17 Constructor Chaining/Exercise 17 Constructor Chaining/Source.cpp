#include <iostream>

using namespace std;

class Vehicle {
	int year;
public :
	Vehicle(int Year) : year(Year) {
		cout << "Vehicle constructor is called !" << endl;
	}
};

class Car : public Vehicle {
	int number_of_doors;
public :
	Car(int Year, int Number_of_doors) : Vehicle(Year), number_of_doors(Number_of_doors) {
		cout << "Car constructor is called !" << endl;
	}
};
class Sportscar : public Car {
	int max_speed;
public :
	Sportscar(int Year, int Number_of_doors, int Max_speed) : Car(Year, Number_of_doors), max_speed(Max_speed) {
		cout << "Sportscar constructor is called !" << endl;
	}
};

int main() {
	Sportscar sportscar1(2024, 4, 220);
	return 0;
}