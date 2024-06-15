#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int n, k;

	std::cin >> n >> k;

	std::vector<std::vector<int>> Students(6, std::vector<int>(2, 0));


	// resize() 사용
	//std::vector<std::vector<int>> Students;
	//Students.resize(6);
	//for (int i = 0; i < 6; ++i)
	//{
	//	Students[i].resize(2, 0);
	//}

	for (int i = 0; i < n; i++)
	{
		int s, y;
		std::cin >> s >> y;
		Students[y - 1][s]++;
	}

	int roomCount = 0;

	for (int i = 0; i < Students.size(); i++)
	{
		for (int j = 0; j < Students[i].size(); j++)
		{
			roomCount += Students[i][j] / k;
			if (Students[i][j] % k != 0)
			{
				roomCount++;
			}
		}
	}

	std::cout << roomCount;
}