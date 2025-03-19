#include <bits/stdc++.h>
using namespace std;

void Sort_0_1_2(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    // int mid = start + end / 2;
    int i = 0;
    while (start <= end)
    {
        if (arr[i] == 0)
        {
            swap(arr[start], arr[i]);
            i++;
            start++;
        }
        else if (arr[i] == 1)
        {
            i++;
        }
        else
        {
            swap(arr[i], arr[end]);
        }
    }
}

int main()
{
    vector<int> v = {1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 2, 2, 2, 1, 0, 2, 0};
    Sort_0_1_2(v);
    for (auto rem : v)
    {
        cout << rem << " ";
    }
    return 0;
}