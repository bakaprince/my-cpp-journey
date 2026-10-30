#include <iostream>
using namespace std;

class Distance {
	int kilo;
	int meter;
public:
	Distance(int k, int m) {
		kilo = k;
		if (m >= 1000) {
			kilo += m / 1000;
			m = m % 1000;
		}
		meter = m;
	}
	void display() {
		cout << kilo << " km " << meter << " m " << '\n';
	}
	Distance operator+(Distance& obj) {
		Distance temp(0, 0);
		temp.kilo = kilo + obj.kilo;
		if (meter+obj.meter >= 1000) {
			temp.kilo += ((meter+obj.meter) / 1000);
			temp.meter = (meter + obj.meter) % 1000;
		}
		else {
			temp.meter = (meter + obj.meter);
		}
		return temp;
	}
};
int main() {
	Distance D1(10, 200);
	Distance D2(11, 1200);
	Distance D3 = D1 + D2;
	D2.display();
	D3.display();
}