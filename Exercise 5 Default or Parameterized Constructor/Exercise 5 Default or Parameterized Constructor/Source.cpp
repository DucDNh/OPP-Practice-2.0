#include <iostream>

using namespace std;

class Rectangle {
	int length;
	int width;
public :
	Rectangle() {
		length = 1;
		width = 1;
	}
	Rectangle(int Length, int Width) {
		length = Length;
		width = Width;
	}
	int get_area() {
		return length * width;
	}
};

int main() {
	Rectangle rectangle1 = Rectangle(4, 5);
	Rectangle rectangle2;
	cout << "Area_1 = " << rectangle1.get_area() << " Area_2 = " << rectangle2.get_area();
	return 0;
}