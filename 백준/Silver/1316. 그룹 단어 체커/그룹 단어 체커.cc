#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isGroupWord(const string& word)
{
	vector<bool> visited(26, false);

	for (int i = 0; i < word.length(); i++)
	{
		if (!visited[word[i] - 'a'])
		{
			visited[word[i] - 'a'] = true;
		}
		else
		{
			if (word[i] != word[i - 1])
			{
				return false;
			}
		}
	}

	return true;
}

int main(void)
{
	int n;
	cin >> n;

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		string word;
		cin >> word;

		if (isGroupWord(word))
		{
			count++;
		}
	}

	cout << count << endl;
}