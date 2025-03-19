#include <bits/stdc++.h>
using namespace std;

void RotateArray(vector<int> &arr)
{
    int n = arr.size() - 1;
    if (n <= 1)
        return;
    int first = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
}

int main()
{
    vector<int> b = {1, 2, 3, 4, 5};
    RotateArray(b);
    for (auto rem : b)
    {
        cout << rem << " ";
    }

    return 0;
}