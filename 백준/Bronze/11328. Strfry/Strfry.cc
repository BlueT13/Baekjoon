#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	std::string FirstString;
	std::string SecondString;
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> FirstString >> SecondString;

		std::sort(FirstString.begin(), FirstString.end());
		std::sort(SecondString.begin(), SecondString.end());
		if (FirstString == SecondString)
		{
			std::cout << "Possible" << std::endl;
		}
		else
		{
			std::cout << "Impossible" << std::endl;
		}
	}
}