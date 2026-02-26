#include <iostream>

using namespace std;

class Person {
protected : 
	int age;
public :
	Person(int Age) : age(Age) {
	}
};

class Student : public Person {
public :
	Student(int Age) : Person(Age) {
	}
	void get_age() {
		cout << "Student Age is " << age << " !" << endl;
	}
};

class Teacher : public Person {
public :
	Teacher(int Age) : Person(Age) {
	}
	void get_age() {
		cout << "Teacher Age is " << age << " !" << endl;
	}
};

int main() {
	Student student1(13);
	Teacher teacher1(25);
	student1.get_age();
	teacher1.get_age();
	return 0;
}