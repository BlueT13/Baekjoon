#include <iostream>
using namespace std;

int main(void)
{
	int array[100] = { 0, };
	int n, m;
	cin >> n >> m;

	for (int a = 0; a < m; a++)
	{
		int i, j, k;
		cin >> i >> j >> k;
		for (int b = i; b <= j; b++)
		{
			array[b - 1] = k;
		}
	}

	for (int a = 0; a < n; a++)
	{
		cout << array[a] << " ";
	}
}