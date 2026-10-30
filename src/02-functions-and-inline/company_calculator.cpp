#include <iostream>
using namespace std;

class Calculator {
public:
	void add(int a, int b) {
		cout << "a+b= " << a + b << '\n';
	}
	void add(double a, double b) {
		cout << "a+b= " << a + b << '\n';
	}
};
int main() {
	Calculator C1;
	C1.add(10, 20);
	C1.add(0.323, 93.23);
}