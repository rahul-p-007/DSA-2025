#include <bits/stdc++.h>
using namespace std;

int howManyTimeRotated(vector<int> arr)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = INT_MAX;
    int index = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // Considering array is already sorted
        if (arr[low] <= arr[high])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            break;
        }
        else if (arr[low] <= arr[mid])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            // if left part is not sorted
            low = mid + 1;
        }
        else
        {
            if (arr[mid] < ans)
            {
                index = mid;
                ans = arr[mid];
            }
            high = mid - 1;
        }
    }
    return index;
}
int main()
{
    vector<vector<int>> testCases = {
        {3, 4, 5, 1, 2},             // Rotated 3 times
        {7, 9, 11, 12, 5},           // Rotated 4 times
        {1, 2, 3, 4, 5},             // Not rotated (0 times)
        {2, 3, 4, 5, 1},             // Rotated 4 times
        {15, 18, 2, 3, 6, 12},       // Rotated 2 times
        {5, 6, 7, 8, 9, 1, 2, 3, 4}, // Rotated 5 times
        {1},                         // Not rotated (0 times)
        {10, 20, 30, 5, 7},          // Rotated 3 times
    };

    for (auto arr : testCases)
    {
        cout << "Array: ";
        for (int num : arr)
            cout << num << " ";
        cout << "\nRotated: " << howManyTimeRotated(arr) << " times\n\n";
    }

    return 0;
}
