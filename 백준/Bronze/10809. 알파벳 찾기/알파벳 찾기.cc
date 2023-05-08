#include <iostream>
using namespace std;

int main(void)
{
	string s;
	cin >> s;

	int alphabet[26];
	fill(alphabet, alphabet + 26, -1);

	for (int i = 0; i < s.size(); i++)
	{
		if (alphabet[s[i] - 'a'] == -1)
		{
			alphabet[s[i] - 'a'] = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << alphabet[i] << " ";
	}
}