#include <iostream>

using namespace std;

class Vehicle {
public :
	void start_transport() {
		cout << "Starting Transport !" << endl;
	}
};

class Car : public Vehicle {
protected :
	int number_of_doors;
public : 
	void open_door() {
		cout << "Opening Door ~!" << endl;
	}
};

class SportsCar : public Car {
	int max_speed;
public :
	void activate_turbo() {
		cout << "Activating Turbo !" << endl;
	}
};

int main() {
	SportsCar spcar1;
	spcar1.activate_turbo();
	spcar1.open_door();
	spcar1.start_transport();
	return 0;
}