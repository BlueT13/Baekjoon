#include <iostream>
using namespace std;

int main(void)
{
	string majorSubject;
	double credit[20];
	double grade[20];
	double sum = 0;
	double creditSum = 0;
	for (int i = 0; i < 20; ++i)
	{
		string input;
		cin >> majorSubject >> credit[i] >> input;
		if (input == "A+") grade[i] = 4.5;
		else if (input == "A0") grade[i] = 4.0;
		else if (input == "B+") grade[i] = 3.5;
		else if (input == "B0") grade[i] = 3.0;
		else if (input == "C+") grade[i] = 2.5;
		else if (input == "C0") grade[i] = 2.0;
		else if (input == "D+") grade[i] = 1.5;
		else if (input == "D0") grade[i] = 1.0;
		else if (input == "F") grade[i] = 0.0;
		else if (input == "P") { grade[i] = 0.0; credit[i] = 0; }
		sum += (grade[i] * credit[i]);
		creditSum += credit[i];
	}

	cout << fixed;
	cout.precision(6);
	cout << sum / creditSum;
}