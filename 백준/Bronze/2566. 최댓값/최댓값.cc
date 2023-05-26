#include <iostream>

using namespace std;

int main(void)
{
	int array[9][9] = { 0, };
	int max = 0;
	int row, col;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> array[i][j];
			if (max <= array[i][j])
			{
				max = array[i][j];
				row = i + 1;
				col = j + 1;
			}
		}
	}

	cout << max << "\n" << row << " " << col << "\n";
}