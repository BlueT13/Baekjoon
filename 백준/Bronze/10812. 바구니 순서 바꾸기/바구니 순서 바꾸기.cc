#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int n, m;
	cin >> n >> m;

	vector<int> array(n);
	for (int i = 0; i < n; i++)
	{
		array[i] = i + 1;
	}

	for (int a = 0; a < m; a++)
	{
		int i, j, k;
		cin >> i >> j >> k;

		rotate(array.begin() + i - 1, array.begin() + k - 1, array.begin() + j);
	}

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}