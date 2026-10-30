#include <iostream>
using namespace std;

class Payment {
public:
	void Pay(int amt) {
		cout << amt<<'\n';
	}
	void Pay(double amt) {
		cout << amt<<'\n';
	}
	void Pay(double amt, int id) {
		cout << amt<<'\n';
		cout << id<<'\n';
	}
};
int main() {
	Payment P1;
	P1.Pay(10);
	P1.Pay(10.34);
	P1.Pay(10.232, 10101);
	return 0;
}