#include <iostream>
#include <vector>

using namespace std;

class Employee {
	string name;
public :
	Employee(string Name) : name(Name) { }
	void show_employee() {
		cout << name << " is working !" << endl;
	}
};

class Department {
	vector<Employee*> all_employee;
public :
	void add_employee(Employee* tem_employee) {
		all_employee.push_back(tem_employee);
	}
	void show_all_employee() {
		for (Employee* employee : all_employee) employee->show_employee();
	}
};

int main() {
	Employee Alice("Alice"), Bob("Bob");
	Department dev;
	dev.add_employee(&Alice);
	dev.add_employee(&Bob);
	dev.show_all_employee();
	return 0;
}