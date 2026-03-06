#include <iostream>

using namespace std;

class Box {
	int width, length;
	friend int calculate_volume(int height, const Box& box);
public :
	Box(int Width, int Length) : width(Width), length(Length) { }
};

int calculate_volume(int height, const Box& box) {
	return height * box.width * box.length;
}

int main() {
	Box boxx(10, 5);
	cout << "Volume of 10x5x2 : " << calculate_volume(2, boxx) << endl;
	return 0;
}