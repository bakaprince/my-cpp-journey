#include <iostream>
using namespace std;

template<class T>
class Marks {
public:
	T x;
	void input() {
		cin >> x;
	}
	void display() {
		cout << x << '\n';
	}
};
template<class T>
class SquareMarks : public Marks<T> {
	T sq_x;

public:
	void calculate() {
		sq_x = this->x * this->x;
	}
	void display() {
		cout << sq_x<<'\n';
	}
};
int main() {
	SquareMarks<int> m1;
	m1.input();
	m1.calculate();
	m1.display();
	SquareMarks<double> m2;
	m2.input();
	m2.calculate();
	m2.display();
}