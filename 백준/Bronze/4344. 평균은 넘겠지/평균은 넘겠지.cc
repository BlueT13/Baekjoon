#include <iostream>
using namespace std;

int main()
{
	int c;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		int n;
		cin >> n;
		int* array = new int[n];
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> array[j];
			sum += array[j];
		}

		int average = sum / n;
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (array[j] > average)
			{
				count++;
			}
		}
		cout << fixed;
		cout.precision(3);
		cout << (double)count / n * 100 << "%" << endl;
		delete[] array;
	}
}