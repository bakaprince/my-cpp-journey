#include <iostream>
using namespace std;

class Calculator {
public:
	void calculate(int a, int b) {
		cout << a + b << endl;
	}
	void calculate(int a, int b, int c) {
		cout << a + b + c << endl;
	}
	void calculate(double a, double b) {
		cout << a * b << endl;
	}
};
int main() {
	Calculator c;
	c.calculate(10, 20);
	c.calculate(10, 20, 30);
	c.calculate(23.42, 432.1);
}