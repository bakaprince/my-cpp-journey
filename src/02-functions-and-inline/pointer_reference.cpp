#include <iostream>
using namespace std;

int main() {
	int num = 10;
	int* ptr = &num;
	cout << ptr << '\n';
	ptr += 1;
	cout << ptr<<'\n';
	num += 1;
	cout << ptr<<'\n';


	int& ref = num;
	ref += 1;
	cout << ref;
	cout << num;
}
