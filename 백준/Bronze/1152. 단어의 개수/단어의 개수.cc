#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;
	getline(cin, input);

	int count = 0;
	bool isWord = false;

	for (char c : input)
	{
		if (c == ' ')
		{
			isWord = false;
		}
		else
		{
			if (!isWord)
			{
				count++;
				isWord = true;
			}
		}
	}

	cout << count;
}