#include <iostream>
#include <math.h>
using namespace std;

int decimalTobinary(int n)
{
    int binaryNo = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryNo = bit * pow(10, i++) + binaryNo;
        n /= 2;
    }
    return binaryNo;
}

int decimalTobinary2(int n)
{
    int binaryNo = 0;
    int i = 0;
    while (n)
    {
        int bit = n & 1;
        binaryNo = bit * pow(10, i++) + binaryNo;
        n = n >> 1;
    }
    return binaryNo;
}

int binaryTodecimal(int n)
{
    int decimalNo = 0;
    int i = 0;
    while (n)
    {
        int bit = n % 10;
        decimalNo = bit * pow(2, i++) + decimalNo;
        n /= 10;
    }
    return decimalNo;
}

int main()
{
    int size;
    cin >> size;
    int bNO = decimalTobinary(size);
    cout << "Binary : " << bNO;
    cout << endl;
    cout << "Binary : " << decimalTobinary2(size);
    cout << endl;
    cout << "Decimal : " << binaryTodecimal(bNO);
    return 0;
}