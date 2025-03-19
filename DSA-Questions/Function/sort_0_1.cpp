#include <bits/stdc++.h>
using namespace std;

void SortMethod(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (i != end)
    {
        if (arr[i] == 0)
        {
            swap(arr[start], arr[i]);
            i++;
            start++;
        }
        else if (arr[i] == 1)
        {
            swap(arr[end], arr[i]);
            end--;
        }
    }
}

int main()
{
    vector<int> v = {1, 1, 1, 0, 0, 1, 0, 0, 1, 0};
    SortMethod(v);
    for (auto rem : v)
    {
        cout << rem << " ";
    }
    return 0;
}