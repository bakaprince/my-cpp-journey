#include <iostream>
using namespace std;

class salesInfo {
	int quantity;
	double price;

public:
	salesInfo(int q, double p) {
		quantity = q;
		price = p;
	}
	void display() {
		cout << quantity << '\n';
		cout << price << '\n';
	}
	friend salesInfo operator +(salesInfo obj1, salesInfo obj2) {
		salesInfo temp(0, 0);
		temp.price = obj1.price + obj2.price;
		temp.quantity = obj1.quantity + obj2.quantity;
		return temp;
	}
};
int main() {
	salesInfo S1(100, 203);
	salesInfo S2(10, 1232.3);
	salesInfo S3 = S1 + S2;
	S3.display();
}