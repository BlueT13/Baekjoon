#include <iostream>
using namespace std;

int main(void)
{
	int n, m;
	cin >> n >> m;
	int array[101] = { 0, };

	for (int i = 1; i <= n; i++)
	{
		array[i] = i;
	}

	while (m--)
	{
		int i, j;
		cin >> i >> j;

		while (i < j)
		{
			swap(array[i], array[j]);
			i++;
			j--;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << array[i] << " ";
	}
}