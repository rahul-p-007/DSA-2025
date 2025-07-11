#include <bits/stdc++.h>
using namespace std;

bool SearchDuplicateEleRotateSortArr(vector<int> arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return true;
        }
        else if (arr[low] == arr[mid] && arr[high] == arr[mid])
        {
            low++;
            high--;
            continue;
        }
        else if (arr[low] <= arr[mid])
        {
            if (arr[low] <= target && target <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= target && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}
int main()
{
    vector<int> arr1 = {2, 5, 6, 0, 0, 1, 2};
    vector<int> arr2 = {1, 1, 1, 3, 1};
    vector<int> arr3 = {4, 5, 6, 7, 0, 1, 2};

    vector<int> testCases = {0, 3, 6, 7, 2, 9};

    for (int target : testCases)
    {
        cout << "Searching " << target << " in arr1: " << (SearchDuplicateEleRotateSortArr(arr1, target) ? "true" : "false") << endl;
        cout << "Searching " << target << " in arr2: " << (SearchDuplicateEleRotateSortArr(arr2, target) ? "true" : "false") << endl;
        cout << "Searching " << target << " in arr3: " << (SearchDuplicateEleRotateSortArr(arr3, target) ? "true" : "false") << endl;
        cout << "--------------------------------" << endl;
    }

    return 0;
}
