#include <iostream>
#include <math.h>
using namespace std;

int CheckPrimeOrNot(int n)
{

    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int size;
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        if (CheckPrimeOrNot(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}