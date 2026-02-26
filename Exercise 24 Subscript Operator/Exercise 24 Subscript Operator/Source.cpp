#include <iostream>
#include <stdexcept>

using namespace std;

class ArrayWrapper {
	int array[5] = {0, 0, 0, 0, 0};
public :
	int& operator[](int index) {
		if (index >= 0 && index <= 4) {
			return array[index];
		}
		else {
			 throw out_of_range("Error: Index out of bounds (0-4).");
		}
	}
};
int main() {
	ArrayWrapper a;
	try {
		a[6] = 5;
	} catch (const out_of_range e) {
		cout << e.what() << endl;
	}
	a[0] = 10;
	cout << a[3];
	return 0;
}