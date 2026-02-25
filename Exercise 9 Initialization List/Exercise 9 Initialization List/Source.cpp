#include <iostream>

using namespace std;

class Student {
	const string name;
	int roll_number;
	double score;
public :
	Student(string Name, int Roll_number, double Score) : name(Name), roll_number(Roll_number), score(Score) {
	}
	void display_data() {
		cout << "Name : " << name << ", Roll Number : " << roll_number << ", Score : " << score << endl;
	}
};

int main() {
	Student duc("DucDNh", 19, 81.9);
	duc.display_data();
	return 0;
}