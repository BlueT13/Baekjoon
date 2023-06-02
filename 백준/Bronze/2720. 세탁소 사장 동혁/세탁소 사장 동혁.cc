#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int c;
		cin >> c;

		int quarters = c / 25;
		c %= 25;

		int dimes = c / 10;
		c %= 10;

		int nickels = c / 5;
		c %= 5;

		int pennies = c;

		cout << quarters << " " << dimes << " " << nickels << " " << pennies << endl;
	}

	return 0;
}