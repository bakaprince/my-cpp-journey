#include <iostream>

int main()
{
	int x{};
	int y{};
	int z{};

	std::cout << "Enter Three Integers Seperated by Space: ";
	std::cin >> x >> y >> z;
	
	std::cout << "You Entered " << x << "," << y << " and " << z;
	return 0;
}