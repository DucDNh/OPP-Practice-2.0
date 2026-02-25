#include <iostream>

using namespace std;

class Rectangle {
	int length;
	int width;
public :
	Rectangle(int Length, int Width) {
		length = Length;
		width = Width;
	}
	int calculate_area() {
		int area = width * length;
		return area;
	}
	int calculate_perimeter() {
		int perimeter = 2 * (width + length);
		return perimeter;
	}
};

int main() {
	Rectangle rectangle1 = Rectangle(15, 20);
	cout << "Area = " << rectangle1.calculate_area() << ", Perimeter = " << rectangle1.calculate_perimeter() << endl;
	return 0;
}