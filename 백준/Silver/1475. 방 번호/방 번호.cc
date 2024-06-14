#include <iostream>
#include <vector>

int main()
{
	std::vector<int> Counts(10, 0);
	std::vector<int>::iterator iter;
	int N;
	int Output = 0;

	std::cin >> N;
	while (N > 0)
	{
		int Result = N % 10;

		if (Result == 6 || Result == 9)
		{
			Counts[6] += 1;
		}
		else
		{
			Counts[Result] += 2;
		}

		N /= 10;
	}

	for (iter = Counts.begin(); iter != Counts.end(); iter++)
	{
		if (Output < *iter)
		{
			Output = *iter;
		}
	}

	if (Output % 2 != 0)
	{
		Output += 1;
	}

	std::cout << Output / 2;
}