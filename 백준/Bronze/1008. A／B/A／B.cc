#include <iostream>

int main()
{
	double A, B;
	std::cin >> A >> B;
	std::cout.precision(9);

	std::cout << std::fixed << A / B;
}