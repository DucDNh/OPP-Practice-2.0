#include <iostream>

using namespace std;

class Resource {
	string id;
public :
	Resource(string ID) {
		id = ID;
		cout << "Resource " << id << " acquired" << endl;
	}
	~Resource() {
		cout << "Resource " << id << " released" << endl;
	}
};

void test_function() {
	Resource resource1 = Resource("20206969");
}

int main() {
	test_function();
	return 0;
}