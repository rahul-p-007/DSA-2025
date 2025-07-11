#include <bits/stdc++.h>
using namespace std;

int FirstOccBinarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int count = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            count = mid;
            end = mid - 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return count;
}

int LastOccBinarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int count = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            count = mid;
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return count;
}
int TotalElement(vector<int> arr, int target)
{
    int start = FirstOccBinarySearch(arr, target);
    int last = LastOccBinarySearch(arr, target);
    return last - start + 1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 6};
    int ans = TotalElement(arr, 4);

    cout << "Total Occurance of no. :" << ans;
}