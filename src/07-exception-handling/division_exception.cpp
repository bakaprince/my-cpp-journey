#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;

	cin >> num1;
	cin >> num2;
	try {
		if (num2 == 0) {
			throw "Division By Zero Error";
		}
		cout << num1 / num2;
		cout << num1 % num2;
	}
	catch (const char* msg) {
		cout << msg;
	}
}