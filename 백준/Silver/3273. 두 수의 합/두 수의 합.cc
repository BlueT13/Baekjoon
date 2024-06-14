#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int n;
	std::vector<int> NumberSequence;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		std::cin >> input;
		NumberSequence.push_back(input);
	}
	std::sort(NumberSequence.begin(), NumberSequence.end());


	int x;
	std::cin >> x;
	int count = 0;
	int sum = 0;
	int low = 0;
	int high = n - 1;

	while (low < high)
	{
		sum = NumberSequence[low] + NumberSequence[high];
		if (sum > x)
		{
			high--;
		}
		else if (sum < x)
		{
			low++;
		}
		else
		{
			count++;
			high--;
			low++;
		}
	}

	std::cout << count;
}