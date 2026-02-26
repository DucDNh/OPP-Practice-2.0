#include <iostream>
#include <vector>

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
	vector<unique_ptr<Shape>> shape1;
	shape1.push_back(make_unique<Square>(6.0));
	shape1.push_back(make_unique<Triangle>(3.0, 4.0));
	for (const auto& shape_ptr : shape1)
		cout << "Area = " << shape_ptr->area() << endl;
	return 0;
}