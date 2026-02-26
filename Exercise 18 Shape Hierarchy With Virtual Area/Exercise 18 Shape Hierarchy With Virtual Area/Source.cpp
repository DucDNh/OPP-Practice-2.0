#include <iostream>

using namespace std;

class Shape {
public :
	virtual double area() = 0;
};

class Square : public Shape {
	double side;
public :
	Square(double Side) : side(Side) { }
	double area() override {
		return side * side;
	}
};

class Triangle : public Shape {
	double base, height;
public : 
	Triangle(double Base, double Height) : base(Base), height(Height) { }
	double area() override {
		return (1.0 / 2.0) * (base * height);
	}
};

int main() {
	Shape* shape[2];
	Square square1(6);
	Triangle triangle1(3, 4);
	shape[0] = &square1;
	shape[1] = &triangle1;
	cout << "Square area = " << shape[0] -> area() << ", Triangle area = " << shape[1] -> area() << endl;
	return 0;
}