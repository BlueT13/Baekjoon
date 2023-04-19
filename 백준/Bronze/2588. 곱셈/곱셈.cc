#include <iostream>
using namespace std;

int main()
{
	int input1, input2;
	int i, j, k;

	cin >> input1;
	cin >> input2;

	i = input2 / 100;
	j = input2 % 100 / 10;
	k = input2 % 100 % 10;

	cout << input1 * k << "\n";
	cout << input1 * j << "\n";
	cout << input1 * i << "\n";
	cout << input1 * input2;

	return 0;
}