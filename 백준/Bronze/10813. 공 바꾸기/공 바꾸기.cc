#include <iostream>
using namespace std;

int main(void)
{
	int n, m;
	cin >> n >> m;
	int* array = new int[n];

	for (int a = 0; a < n; a++)
	{
		array[a] = a + 1;
	}

	for (int a = 0; a < m; a++)
	{
		int i, j;
		cin >> i >> j;
		int temp = array[i - 1];
		array[i - 1] = array[j - 1];
		array[j - 1] = temp;
	}

	for (int a = 0; a < n; a++)
	{
		cout << array[a] << " ";
	}
	delete[] array;
}