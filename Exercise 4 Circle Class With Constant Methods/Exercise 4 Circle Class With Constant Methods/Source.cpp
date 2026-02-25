#include <iostream>

using namespace std;

class Circle {
	const double pi = 3.14159;
	double radius;
public :
	Circle(double Radius) {
		radius = Radius;
	}
	double get_radius() {
		return radius;
	}
	double get_area() {
		double area = radius * radius * pi;
		return area;
	}
};

int main() {
	Circle circle1 = Circle(5);
	cout << "Circle with radius " << circle1.get_radius() << " has an area of : " << circle1.get_area() << endl;
	return 0;
}