#include <bits/stdc++.h>
using namespace std;

int DivideNumber(int dividend, int divisor)
{
    int start = 0;
    int end = abs(dividend);

    int ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (abs(mid * divisor) <= abs(dividend))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend))
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}

int main()
{
    int dividend, divisor;

    // Example inputs
    dividend = 50, divisor = 10;
    cout << "DivideNumber(" << dividend << ", " << divisor << ") = " << DivideNumber(dividend, divisor) << endl;

    dividend = 1, divisor = 7;
    cout << "DivideNumber(" << dividend << ", " << divisor << ") = " << DivideNumber(dividend, divisor) << endl;

    dividend = 25, divisor = 25;
    cout << "DivideNumber(" << dividend << ", " << divisor << ") = " << DivideNumber(dividend, divisor) << endl;

    dividend = 1000, divisor = 100;
    cout << "DivideNumber(" << dividend << ", " << divisor << ") = " << DivideNumber(dividend, divisor) << endl;

    return 0;
}
