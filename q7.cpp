#include <iostream>
using namespace std;

int factTail(int n, int accumulator = 1)
{
    if (n == 0)
        return accumulator;
    return factTail(n - 1, n * accumulator);
}

int main()
{
    cout << factTail(5);
    return 0;
}