#include <iostream>
using namespace std;

void OddEven(int n)
{
    if (n % 2 == 0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }
}

int main()
{
    int size;
    cin >> size;
    OddEven(size);
    return 0;
}