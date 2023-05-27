#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string strings[5];
    int maxLength = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> strings[i];
        maxLength = max(maxLength, (int)strings[i].length());
    }

    for (int i = 0; i < maxLength; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i < strings[j].length())
            {
                cout << strings[j][i];
            }
        }
    }
}
