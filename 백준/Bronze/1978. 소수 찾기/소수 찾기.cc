#include <iostream>
using namespace std;

int main()
{
	int result = 0;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		int input;

		cin >> input;
		for (int div = 1; div <= input; div++)
		{
			if (input % div == 0)
			{
				count++;
			}
		}

		if (count == 2)
		{
			result++;
		}
	}

	cout << result;

	return 0;
}