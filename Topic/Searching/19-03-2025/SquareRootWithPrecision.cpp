#include <bits/stdc++.h>
using namespace std;

int SquareRoot(int target)
{
    int start = 0;
    int end = target - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid * mid == target)
        {
            return mid;
        }
        else if (mid * mid > target)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int target;
    cout << "Enter the Number of find the squareRoot" << endl;
    cin >> target;
    int Answer = SquareRoot(target);

    int precision;
    cout << "Enter the precision of the number to find the square Root" << endl;
    cin >> precision;

    double step = 0.1;
    double finalAnswer = Answer;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAnswer; j * j <= target; j = j + step)
        {
            finalAnswer = j;
        }
        step = step / 10;
    }

    cout << "Square Root of " << target << " : " << finalAnswer;
}