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
    int Answer = SquareRoot(64);
    cout << "Square Root : " << Answer;
}