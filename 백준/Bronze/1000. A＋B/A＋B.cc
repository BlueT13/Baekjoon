#include <iostream>

int plusFunc(int a, int b)
{
    return a+b;
}

int main()
{
    int A,B;
    std::cin >> A >> B;
    std::cout << plusFunc(A,B);
}