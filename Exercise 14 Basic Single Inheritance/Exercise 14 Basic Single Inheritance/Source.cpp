#include <iostream>

using namespace std;

class Animal {
public :
	virtual void eat() {
		cout << "Animal is eating !" << endl;
	}
};

class Dog : public Animal {
public :
	void eat() override {
		cout << "Dog is eating kibble !" << endl;
	}
	void bark() {
		cout << "Woof! Woof!" << endl;
	}
};

int main() {
	Animal animal1;
	Dog dog1;
	animal1.eat();
	dog1.eat();
	dog1.bark();
	return 0;
}