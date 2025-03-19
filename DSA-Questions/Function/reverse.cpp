#include <iostream>
#include <math.h>
using namespace std;
int reverse(int n)
{
    int num = 0;

    while (n > 0)
    {
        int bit = n % 10;
        num = num * 10 + bit;
        n /= 10;
    }
    return num;
}
int main()
{
    int size;
    cin >> size;
    cout << "Reverse : " << reverse(size);
    return 0;
}