#include <iostream>
using namespace std;

int main(void)
{
    int x;
    cin >> x;
    
    int n;
    cin >> n;
    
    int a, b;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum = sum + a * b;
    }
    
    if(x == sum)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}