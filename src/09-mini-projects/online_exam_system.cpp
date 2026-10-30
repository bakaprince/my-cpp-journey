#include <iostream>
using namespace std;

template<class T,class U>
class Marks {
	T m;
	U p;
public:
	Marks(T a, U b) {
		m = a;
		p = b;
	}
	void highest() {
		if (m > p) {
			cout << m<<endl;
		}
		else {
			cout << p<<endl;
		}
	}
};
int main() {
	Marks M1(10, 20);
	Marks M2(10, 20.4f);
	Marks M3(15.87, 67.9f);

	M1.highest();
	M2.highest();
	M3.highest();


}