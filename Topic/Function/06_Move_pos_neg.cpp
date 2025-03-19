#include <bits/stdc++.h>
using namespace std;

void move_negative_positive(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    while (start <= end)
    {
        if (arr[i] < 0)
        {
            swap(arr[start], arr[i]);
            start++;
            i++;
        }
        else if (arr[i] > 0)
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }
}

int main()
{
    vector<vector<int>> testCases = {
        {-1, 2, -3, 4, -5, 6, -7}, // Mixed negative and positive numbers
        {1, 2, 3, 4, 5},           // Only positive numbers
        {-1, -2, -3, -4, -5},      // Only negative numbers
        {0, -1, 2, -3, 4, -5},     // Includes zero
        {-5, 4, -3, 2, -1, 0, 6},  // Mixed with zero
        {0, 0, 0, 0},              // All zeroes
        {}                         // Empty array
    };

    for (auto &test : testCases)
    {
        move_negative_positive(test);
        for (int num : test)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
