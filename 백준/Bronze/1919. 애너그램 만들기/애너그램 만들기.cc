#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	std::vector<int> Alphabet1(26, 0);
	std::vector<int> Alphabet2(26, 0);

	std::string FirstWord;
	std::string SecondWord;

	std::cin >> FirstWord >> SecondWord;

	for (int i = 0; i < FirstWord.size(); i++)
	{
		Alphabet1[FirstWord[i] - 'a']++;
	}

	for (int i = 0; i < SecondWord.size(); i++)
	{
		Alphabet2[SecondWord[i] - 'a']++;
	}

	int count = 0;
	for (int i = 0; i < 26; i++)
	{
		if (Alphabet1[i] != Alphabet2[i])
		{
			count += std::abs(Alphabet1[i] - Alphabet2[i]);
		}
	}

	std::cout << count;
}