#include <iostream>

using namespace std;

class Point {
	int x;
	int y;
public : 
	Point(int X, int Y) {
		x = X;
		y = Y;
	}
	Point(const Point& existed_point) {
		x = existed_point.x;
		y = existed_point.y;
		cout << "Copy Constructor is Called !" << endl;
	}
	void display() {
		cout << x << ' ' << y << endl;
	}
};

int main() {
	Point point1(10, 20);
	Point point2(point1);
	point1.display();
	point2.display();
	return 0;
}