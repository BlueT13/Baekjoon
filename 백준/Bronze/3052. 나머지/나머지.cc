#include <iostream>
using namespace std;

int main(void)
{
	int count[42] = {0,};
	int result = 0;
	
	for (int i = 0; i < 10; i++)
	{
		int input;
		cin >> input;
		count[input % 42]++;
	}

	for (int i = 0; i < 42; i++)
	{
		if (count[i] != 0)
		{
			result++;
		}
	}

	cout << result;
}