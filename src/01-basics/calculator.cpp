#include <iostream>
using  namespace std;

int main() {
	int num1;
	int num2;
	char op;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter operation(+,-,*,/): ";
	cin >> op;

	switch (op) {
		case '+':
			cout << "Result: " << num1 + num2;
			break;
		case '-':
			cout << "Result: " << num1 - num2;
			break;
		case '*':
			cout << "Result: " << num1 * num2;
			break;
		case '/':
			if (num2 != 0) {
				cout << "Result: " << num1 / num2;
			}
			else {
				cout << "Cannot divide by 0 idiot.";
			}
			break;
		default:
			cout << "Invalid Operator Fool!";
	}
}