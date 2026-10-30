#include <iostream>
using namespace std;

class Complex {
public:
	double real;
	double imag;
	Complex(double r, double i) {
		real = r;
		imag = i;
	}
	void display() {
		cout << real << "+" << imag << 'i' << '\n';
	}
	Complex operator -(Complex& obj) {
		Complex temp(0, 0);
		temp.real = real - obj.real;
		temp.imag = imag - obj.imag;
		return temp;
	}
};
int main() {
	Complex C1(12, 12);
	Complex C2(10, 4);
	Complex C3 = C1 - C2;
	C3.display();
}