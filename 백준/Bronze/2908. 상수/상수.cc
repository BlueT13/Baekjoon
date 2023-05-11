#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string a, b;
	cin >> a >> b;

	swap(a[0], a[2]);
	swap(b[0], b[2]);

	int num1 = stoi(a);
	int num2 = stoi(b);

	cout << max(num1, num2);
}