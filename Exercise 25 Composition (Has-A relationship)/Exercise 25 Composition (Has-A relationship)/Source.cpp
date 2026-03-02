#include <iostream>

using namespace std;

class Engine {
public :
	void start() {
		cout << "Engine started !" << endl;
	}
};

class Car {
	Engine engine1;
public :
	void drive() {
		engine1.start();
	}
};

int main() {
	Car car1;
	car1.drive();
	return 0;
}