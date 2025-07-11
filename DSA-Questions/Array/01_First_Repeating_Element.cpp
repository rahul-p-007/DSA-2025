#include <bits/stdc++.h>
using namespace std;

int FirstRepeatingElement(vector<int> arr)
{
    int n = arr.size() - 1;
    int maxElme = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxElme)
        {
            maxElme = arr[i];
        }
    }
    int hash[maxElme];
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (hash[i] > 1)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 5, 3, 4, 3, 5, 6};
    int ans = FirstRepeatingElement(arr);
    cout << ans;
    return 0;
}

class Solution
{
public:
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr)
    {
        int n = arr.size(); // Fix incorrect size calculation

        int maxElme = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxElme)
            {
                maxElme = arr[i];
            }
        }

        // Fix: Initialize hash array with 0
        int hash[maxElme + 1] = {0};

        // Store count of each element
        for (int i = 0; i < n; i++)
        {
            hash[arr[i]]++;
        }

        // Find the first element that appears more than once
        for (int i = 0; i < n; i++)
        {
            if (hash[arr[i]] > 1)
            {                 // Fix: Check hash[arr[i]] instead of hash[i]
                return i + 1; // Fix: Return 1-based index
            }
        }

        return -1; // If no repeating element is found
    }
};
