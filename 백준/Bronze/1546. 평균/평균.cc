#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* array = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    sort(array, array + n);

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (double)array[i] / array[n - 1] * 100;
    }

    cout << sum / n;

    delete[] array;
}