#include <iostream>
using namespace std;

class shape {
public:
	virtual void area() {};
};
class Square :public shape {
	int length;
public:
	Square(int l) {
		length = l;
	}
	void area() {
		cout << "Area of Square : " << length*length;
	}
};
class Rectangle:public shape {
	int length;
	int breadth;
public:
	Rectangle(int l,int b) {
		length = l;
		breadth = b;
	}
	void area() {
		cout << "Area of Rectangle : " << length * breadth;
	}
};
class Triangle :public shape {
	int base;
	int height;
public:
	Triangle(int b,int h) {
		base = b;
		height = h;
	}
	void area() {
		cout << "Area of Triangle : " << 0.5*base*height;
	}
};

int main() {
	Square sq(5);
	Rectangle rect(4, 6);
	Triangle tri(3, 8);

	shape* s1 = &sq;
	shape* s2 = &rect;
	shape* s3 = &tri;

	s1->area();
	cout << '\n';
	s2->area();
	cout << '\n';
	s3->area();
	cout << '\n';

	return 0;
}