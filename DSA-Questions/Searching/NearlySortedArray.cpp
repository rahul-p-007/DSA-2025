#include <bits/stdc++.h>
using namespace std;

int findInNearlySortedArray(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (mid - 1 >= start && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (mid + 1 < end && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 2;
        }
        else
        {
            start = mid + 2;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int index = findInNearlySortedArray(arr, target);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
    {

        cout << "Element not found!" << endl;
    }
}