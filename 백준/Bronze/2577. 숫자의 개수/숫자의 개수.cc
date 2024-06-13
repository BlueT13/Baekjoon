#include <iostream>
#include <vector>

int main()
{
	int A;
	int B;
	int C;

	std::cin >> A;
	std::cin >> B;
	std::cin >> C;

	int Result = A * B * C;

	std::vector<int> Count(10, 0);

	while (Result > 0)
	{
		Count[Result % 10]++;
		Result /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << Count[i] << std::endl;
	}
}