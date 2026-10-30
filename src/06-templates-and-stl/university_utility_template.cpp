#include <iostream>
using namespace std;

template<class T,class U>
class Utility {
	T a;
	U b;
public:
	Utility(T a, U b) {
		this->a = a;
		this->b = b;
	}
	void greater() {
		if (a > b) {
			cout << a << '\n';
		}
		else {
			cout << b << '\n';
		}
	}
};

int main() {
	Utility U1(10.55643, 20.6564F);
	U1.greater();
}