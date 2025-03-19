#include <bits/stdc++.h>
using namespace std;

void Sort_0_1_2(vector<int> &arr)
{
    int start = 0, mid = 0, end = arr.size() - 1;

    while (mid <= end)
    {
        if (arr[mid] == 0)
        {
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++; // Just move forward
        }
        else // arr[mid] == 2
        {
            swap(arr[mid], arr[end]);
            end--; // Decrease end pointer
        }
    }
}

int main()
{
    vector<int> v = {1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 2, 2, 2, 1, 0, 2, 0};
    Sort_0_1_2(v);

    for (int rem : v)
    {
        cout << rem << " ";
    }
    return 0;
}
