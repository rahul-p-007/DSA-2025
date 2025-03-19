#include <bits/stdc++.h>
using namespace std;

void moveNeg(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = 0;
    while (start <= end)
    {
        if (arr[mid] > 0)
        {
            swap(arr[mid], arr[end]);
            end--;
        }
        else
        {
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
    }
}

int findDuplicateElemnt(vector<int> &arr)
{
    int ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);

        if (arr[index] < 0)
        {
            ans = index;
            break;
        }
        arr[index] *= -1;
    }
    return ans;
}

int main()
{
    vector<int> v = {-1, -2, 3, 4, 5, -6, -6, 6, 7, -9};
    moveNeg(v);
    for (auto rem : v)
    {
        cout << rem << " ";
    }
    return 0;
}