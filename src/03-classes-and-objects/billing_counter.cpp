#include <iostream>
using namespace std;

class Counter {
public:
	void billing(int q, double p) {
		double amt = q * p;
		cout << "Price: " << amt << '\n';
	}
	void billing(int q, double p, int per) {
		double amt = q * (p - (p * (per) / 100));
		cout << "Price: " << amt << '\n';
	}
};
int main() {
	Counter C1;
	C1.billing(10, 45.3);
	C1.billing(10, 45.3, 10);
	return 0;
}