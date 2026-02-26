#include <iostream>

using namespace std;

class Point {
	int x;
	int y;
public :
	Point(int X, int Y) : x(X), y(Y) {}
	Point operator+(Point tem_point) {
		int tem_x = x + tem_point.x;
		int tem_y = y + tem_point.y;
		return Point(tem_x, tem_y);
	}
	void get_point() {
		cout << x << ' ' << y << endl;
	}
};

int main() {
	Point pt1(3, 4), pt2(5, 6);
	Point pt_sum = pt1 + pt2;
	pt_sum.get_point();
	return 0;
}