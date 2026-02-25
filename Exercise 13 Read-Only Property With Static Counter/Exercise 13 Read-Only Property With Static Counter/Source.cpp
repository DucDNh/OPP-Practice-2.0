#include <iostream>

using namespace std;

class SerialGenerator {
	static int next_serial_number ;
public :
	int get_serial() {
		next_serial_number++;
		return next_serial_number - 1;
	}
};

int SerialGenerator::next_serial_number = 1000;

int main() {
	SerialGenerator serial1, serial2;
	cout << serial1.get_serial() << endl;
	cout << serial1.get_serial() << endl;
	cout << serial2.get_serial() << endl;
	cout << serial2.get_serial() << endl;
	return 0;
}