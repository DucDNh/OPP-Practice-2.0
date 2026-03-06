#include <iostream>

using namespace std;

class Data {
	int value;
	friend class Accessor;
public :
	Data(int Value) : value(Value) { }
};

class Accessor {
public :
	void display_value(const Data& d) {
		cout << "Friend Accessor read Data value: " << d.value << endl;
	}
};

int main() {
	Data da(1234);
	Accessor ac;
	ac.display_value(da);
	return 0;
}