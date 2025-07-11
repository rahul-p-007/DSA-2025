#include <bits/stdc++.h>
using namespace std;

int SearchEleRotatedSortArr(vector<int> arr, int target)
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
        // Checking left half is sorted or not
        if (arr[start] <= arr[mid])
        {
            if (arr[start] <= target && target <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            // right part is sorted
            if (arr[mid] <= target && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {

                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr1 = {10, 15, 20, 0, 5};
    vector<int> arr2 = {50, 60, 70, 10, 20, 30, 40};
    vector<int> arr3 = {7, 8, 9, 1, 2, 3, 4, 5, 6};

    vector<int> testCases = {5, 10, 20, 70, 1, 6};

    for (int target : testCases)
    {
        int result1 = SearchEleRotatedSortArr(arr1, target);
        cout << "Arr1, Target: " << target << " => Index: " << result1 << endl;

        int result2 = SearchEleRotatedSortArr(arr2, target);
        cout << "Arr2, Target: " << target << " => Index: " << result2 << endl;

        int result3 = SearchEleRotatedSortArr(arr3, target);
        cout << "Arr3, Target: " << target << " => Index: " << result3 << endl;

        cout << "-------------------------------" << endl;
    }

    return 0;
}
