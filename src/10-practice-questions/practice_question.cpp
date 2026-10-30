#include <iostream>
using namespace std;

int main() {
	int a;
	int b;

	cin >> a;
	cin >> b;

	int* ptr = &a;
	int& ref = b;


	*ptr += 10;
	ref *= 2;

	cout << a<<'\n';
	cout << b;

}