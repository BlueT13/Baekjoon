#include <iostream>
#include <vector>

int main()
{
	std::string S = "";
	std::cin >> S;

	//Vector
	std::vector<int> Counts(26);
	for (int i = 0; i < S.size(); i++)
	{
		Counts[S[i] - 'a']++;
	}

	for (int i = 0; i < Counts.size(); i++)
	{
		std::cout << Counts[i] << " ";
	}

	// Array
	//int Counts[26] = {};
	//for (int i = 0; i < S.size(); i++)
	//{
	//	Counts[S[i] - 'a']++;
	//}

	//for (int i = 0; i < sizeof(Counts) / sizeof(int); i++)
	//{
	//	std::cout << Counts[i] << " ";
	//}

}