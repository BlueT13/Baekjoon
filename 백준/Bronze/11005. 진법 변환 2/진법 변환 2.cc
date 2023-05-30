#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, B;
	cin >> N >> B;

	string result = "";

	while (N > 0)
	{
		int remainder = N % B;
		char digit;
		if (remainder < 10)
		{
			digit = remainder + '0';
		}
		else
		{
			digit = remainder - 10 + 'A';
		}

		result = digit + result;
		N /= B;
	}

	cout << result << endl;

	return 0;
}