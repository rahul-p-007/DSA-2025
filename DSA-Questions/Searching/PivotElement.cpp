#include <bits/stdc++.h>
using namespace std;
int FindPivotElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (start == end)
        {
            // Array as single emlement
            return start;
        }

        if (mid <= end && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid - 1 >= start && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        if (arr[start] > arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {7, 8, 9, 1, 2, 3};    // Expected Output: 2 (Index of 9)
    vector<int> arr2 = {4, 5, 6, 7, 1, 2, 3}; // Expected Output: 3 (Index of 7)
    vector<int> arr3 = {1, 2, 3, 4, 5};       // Expected Output: 4 (No rotation)
    vector<int> arr4 = {9};                   // Expected Output: 0 (Single element, no pivot)

    cout << "Pivot Index: " << FindPivotElement(arr1) << endl;
    cout << "Pivot Index: " << FindPivotElement(arr2) << endl;
    cout << "Pivot Index: " << FindPivotElement(arr3) << endl;
    cout << "Pivot Index: " << FindPivotElement(arr4) << endl;

    return 0;
}