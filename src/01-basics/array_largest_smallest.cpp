#include <iostream>
using namespace std;

int main() {
	int arr[5];

	for (int i = 0;i < 5;i++) {
		cout << "enter a integer";
		cin >> arr[i];
	}
	int largest = arr[0];
	int smallest = arr[0];

	for (int j = 0;j < 5;j++) {
		if (arr[j] > largest) {
			largest = arr[j];
		}
		else if (arr[j]<smallest) {
			smallest = arr[j];
		}
	}
	cout << "Largest: " << largest << '\n';
	cout << "smallest:" << smallest;
}
