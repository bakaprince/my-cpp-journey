#include <iostream>
using namespace std;

class Box {
private:
	int length;
	int breadth;
	int height;
public:
	Box(int l, int b, int h = 10) {
		length = l;
		breadth = b;
		height = h;
	}
	Box(Box& B) {
		length = B.length;
		breadth = B.breadth;
		height = B.height;
	}
	int volume() {
		int volume = length * breadth * height;
		return volume;
	}
};
int main() {
	Box B1(10, 20, 30);
	Box B2(30, 14);
	Box B3 = B2;

	cout<<B1.volume();

}