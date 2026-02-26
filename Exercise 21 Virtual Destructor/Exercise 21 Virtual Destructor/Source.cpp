#include <iostream>

using namespace std;

class Base {
public :
	virtual ~Base() {
		cout << "Base destructor is called !" << endl;
	};
};

class Derived : public Base {
	unique_ptr<int> num;
public :
	Derived(int Num) {
		num = make_unique<int>(Num);
		cout << "Derived constructor is called !" << endl;
	}
	~Derived() {
		num.reset();
		cout << "Derived destructor is called !" << endl;
	}
};

int main() {
	unique_ptr<Base> de = make_unique<Derived>(3);
	return 0;
}
