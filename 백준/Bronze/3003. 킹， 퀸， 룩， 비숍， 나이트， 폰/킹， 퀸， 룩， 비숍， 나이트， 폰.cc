#include <iostream>
using namespace std;

int main(void)
{
	int king = 1;
	int queen = 1;
	int rook = 2;
	int bishop = 2;
	int knight = 2;
	int pawn = 8;

	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	cout << king - a << " " << queen - b << " " << rook - c << " " 
		<< bishop - d << " " << knight - e << " " << pawn - f;
}