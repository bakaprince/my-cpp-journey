#include <iostream>

int main() {
	std::cout << "Enter two numbers: ";
	int x{}, y{};
	std::cin >> x >> y;
	std::cout << x << " + " << y << " = " << x + y << '\n';
	std::cout << x << " - " << y << " = " << x - y;
	return 0;
}