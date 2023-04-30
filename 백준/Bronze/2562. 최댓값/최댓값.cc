#include <iostream>
using namespace std;

int main(void)
{
	int inputArray[9];
	int maxValue = 0;
	int maxIndex = 0;

	for (int i = 0; i < sizeof(inputArray)/sizeof(int); i++)
	{
		cin >> inputArray[i];

		if (inputArray[i] > maxValue)
		{
			maxValue = inputArray[i];
			maxIndex = i + 1;
		}
	}

	cout << maxValue << "\n" << maxIndex;
}