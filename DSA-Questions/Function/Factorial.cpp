#include <iostream>
using namespace std;

int Factorial(int n)
{
    int fact = 1;
    // base case
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
    }
    return fact;
}

int main()
{
    int size;
    cin >> size;
    cout << "Fctorial number : " << Factorial(size);
    return 0;
}