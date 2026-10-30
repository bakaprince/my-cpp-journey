#include <iostream>
using namespace std;

int main() {
	int num;

input:
	cout << "Enter a positive number: ";
	cin >> num;

	if (num < 0) {
		cout << "Negative number is not allowed.Try Again.\n";
		goto input;
	}
	cout << "You Entered: " << num;
}