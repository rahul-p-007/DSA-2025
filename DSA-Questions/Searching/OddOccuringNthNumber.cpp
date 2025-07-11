#include <bits/stdc++.h>
using namespace std;

int OddOccuringNthNumber(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // Array have single number
        if (start == end)
        {
            return arr[start];
        }
        // We are the even
        if (mid % 2 == 0)
        {
            // We are in the left search and go to the right search space
            if (mid + 1 < arr.size() && arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        // We are the odd
        else
        {
            if (arr[mid] == arr[mid - 1])
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
    vector<int> arr1 = {1, 1, 2, 2, 3, 4, 4}; // Expected Output: 3
    vector<int> arr2 = {5, 5, 7, 7, 9};       // Expected Output: 9
    vector<int> arr3 = {10, 20, 20};          // Expected Output: 10
    vector<int> arr4 = {42};                  // Expected Output: 42 (edge case: single element)

    cout << "Odd Occurring Element: " << OddOccuringNthNumber(arr1) << endl;
    cout << "Odd Occurring Element: " << OddOccuringNthNumber(arr2) << endl;
    cout << "Odd Occurring Element: " << OddOccuringNthNumber(arr3) << endl;
    cout << "Odd Occurring Element: " << OddOccuringNthNumber(arr4) << endl;

    return 0;
}