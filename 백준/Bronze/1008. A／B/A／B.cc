#include <iostream>
using namespace std;

int main()
{
    double A;
    double B;
    
    cin >> A;
    cin >> B;
    
    cout << fixed;
    cout.precision(9);
    cout << A/B;
    
    return 0;
}