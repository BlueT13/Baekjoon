#include <iostream>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        
        int length = s.length();
        cout << s[0] << s[length - 1] << "\n";
    }
}