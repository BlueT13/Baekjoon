#include <iostream>
using namespace std;

int main(void)
{
    int n, v;
    int arr[100];
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> v;
    
    int count = 0;
    for(int i= 0; i< n; i++)
    {
        if(arr[i] == v)
        {
            count++;
        }
    }
    
    cout << count;
}
