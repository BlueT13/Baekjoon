#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    
    cin >> a >> b;
    cin >> c;
    
    b = b + c;
    a = a + b / 60;
    b = b % 60;
    
    if(a > 23)
    {
        a = a % 24;
    }
    
    cout << a << " " << b;
}