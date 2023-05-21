#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	string input;
	cin >> input;

	int count = 0;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == 'c' && (input[i + 1] == '=' || input[i + 1] == '-'))
		{
			count++;
			i++;
		}
		else if (input[i] == 'd')
		{
			if (input[i + 1] == '-')
			{
				count++;
				i++;
			}
			else if (input[i + 1] == 'z' && input[i + 2] == '=')
			{
				count++;
				i += 2;
			}
			else
			{
				count++;
			}
		}
		else if ((input[i] == 'l' || input[i] == 'n') && input[i + 1] == 'j')
		{
			count++;
			i++;
		}
		else if (input[i] == 's' && input[i + 1] == '=')
		{
			count++;
			i++;
		}
		else if (input[i] == 'z' && input[i + 1] == '=')
		{
			count++;
			i++;
		}
		else
		{
			count++;
		}
	}

	cout << count;
}
