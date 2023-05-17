#include <iostream>
using namespace std;

int main(void)
{
	string words;
	cin >> words;

	bool isPalindrome = true;
	int length = words.length();
	for (int i = 0; i <= length / 2; i++)
	{
		if (words[i] != words[length - 1 - i])
		{
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}