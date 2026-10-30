#include <iostream>
using namespace std;

template<class T>
T utility(T a, T b) {
	if (a > b) {
		return a;
	}
	return b;
};
int main() {
	cout << utility(10, 20)<<'\n';
	cout << utility(23.4, 28.56);
}