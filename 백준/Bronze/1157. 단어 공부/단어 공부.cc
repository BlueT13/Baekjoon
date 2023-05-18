#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string word;
	cin >> word;

	int count[26] = { 0 };

	transform(word.begin(), word.end(), word.begin(), ::tolower);

	for (char c : word)
	{
		count[c - 'a']++;
	}

	int maxCount = 0;
	char maxChar = ' ';
	for (int i = 0; i < 26; i++)
	{
		if (count[i] > maxCount)
		{
			maxCount = count[i];
			maxChar = i + 'A';
		}
		else if (count[i] == maxCount)
		{
			maxChar = '?';
		}
	}

	cout << maxChar;
}