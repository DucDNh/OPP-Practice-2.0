#include <iostream>

using namespace std;

class Printer {
public :
	void print_info() {
		cout << "Default: No specific message provided." << endl;
	}
	void print_info(const string& text) {
		cout << "Custom: " << text << endl;
	}
};

int main() {
	Printer printer1;
	printer1.print_info();
	printer1.print_info("Hello World!");
	return 0;
}