#include <iostream>
using namespace std;

class Shape {
public:
	virtual void area() = 0;
};
class Circle :public Shape {
	int radius;
public:
	Circle(int r) {
		radius = r;
	}
	void area() override {
		cout << "Area: " << 3.14 * radius * radius<<'\n';
	}
};
class Rectangle :public Shape {
protected:
	int length;
	int breadth;
public:
	Rectangle(int l, int b) {
		length = l;
		breadth = b;
	}
	void area() override {
		cout << "Area of rectangle: " << length * breadth << '\n';
	}
};
int main() {
	Circle C1(10);
	Rectangle R1(10, 20);

	C1.area();
	R1.area();

}