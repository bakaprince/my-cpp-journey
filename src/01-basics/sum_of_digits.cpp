#include <iostream>
using namespace std;

int main() {
	int num;
	int sum = 0;

	cout << "Enter a number: ";
	cin >> num;

	while (num > 0) {
		int t = num % 10;
		sum += t;
		num = num/10;
	}
	cout << "Sum of Digits: " << sum;
}