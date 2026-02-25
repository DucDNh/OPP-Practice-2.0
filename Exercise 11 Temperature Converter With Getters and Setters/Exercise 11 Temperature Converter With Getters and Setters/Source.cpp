#include <iostream>

using namespace std;

class Temperature {
	double celcius;
public :
	void set_celcius(double Celcius) {
		celcius = Celcius;
	}
	double get_fahrenheit() {
		return celcius * (9.0 / 5.0) + 32;
	}
};

int main() {
	Temperature temperature1;
	temperature1.set_celcius(100);
	cout << temperature1.get_fahrenheit();
	return 0;
}