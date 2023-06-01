#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	vector<string> croatian = { "c=","c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

	int idx;
	string input;
	cin >> input;

	for (int i = 0; i < croatian.size(); i++)
	{
		while (true)
		{
			idx = input.find(croatian[i]);
			if (idx == string::npos)
			{
				break;
			}
			input.replace(idx, croatian[i].size(), "#");
		}
	}

	cout << input.size();
}