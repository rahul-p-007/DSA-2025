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
    dividend = 5021, divisor = 13;
    int ans = DivideNumber(dividend, divisor);
    int precision;
    cout << "Enter the No. of precision u want to get the answer" << endl;
    cin >> precision;

    double step = 0.1;
    double finalAnswer = abs(ans);
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAnswer; j * abs(divisor) <= abs(dividend); j += step)
        {
            finalAnswer = j;
        }
        step = step / 10;
    }

    if (ans < 0)
    {
        cout << "DivideNumber(" << dividend << ", " << divisor << ") = " << -finalAnswer << endl;
    }
    else
    {
        cout << "DivideNumber(" << dividend << ", " << divisor << ") = " << finalAnswer << endl;
    }
}