#include <iostream>
using namespace std;

void FindElement(int arr[], int brr[], int n, int m, int x)
{
    int diff = INT_MAX;
    int res_l, res_r;
    int start = 0;
    int end = m - 1;
    while (start < n && end != 0)
    {
        if (abs(arr[start] + brr[end] - x) < diff)
        {
        }
    }
}