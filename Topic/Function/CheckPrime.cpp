#include <iostream>
#include <math.h>
using namespace std;

int CheckPrimeOrNot(int n)
{
    int flag = 1;
    if (n == 1)
    {
        return 0;
    }
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int size;
    cin >> size;

    int PRime = CheckPrimeOrNot(size);
    if (PRime)
    {
        cout << " Prime Number";
    }
    else
    {

        cout << " not Prime Number";
    }

    return 0;
}