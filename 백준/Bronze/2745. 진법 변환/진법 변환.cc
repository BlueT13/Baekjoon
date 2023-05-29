#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	string n;
	int b;
	cin >> n >> b;
	int sum = 0;

	for (int i = 0; i < n.size(); i++)
	{
		if (n[i] >= '0' && n[i] <= '9')
		{
			sum += (n[i] - 48) * pow(b, n.size() - i - 1);
		}
		else
		{
			sum += (n[i] - 65 + 10) * pow(b, n.size() - i - 1);
		}
	}
	cout << sum;
}