#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2) {
    // Sort both arrays to apply two-pointer approach
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    vector<pair<int, int>> result;
    int start = 0, end = arr2.size() - 1;

    while (start < arr1.size() && end >= 0) {
        int sum = arr1[start] + arr2[end];

        if (sum == target) {
            int count1 = 1, count2 = 1;

            // Count duplicates of arr1[start]
            while (start + 1 < arr1.size() && arr1[start] == arr1[start + 1]) {
                start++;
                count1++;
            }

            // Count duplicates of arr2[end]
            while (end - 1 >= 0 && arr2[end] == arr2[end - 1]) {
                end--;
                count2++;
            }

            // Add all possible duplicate pairs
            for (int i = 0; i < count1; i++) {
                for (int j = 0; j < count2; j++) {
                    result.push_back({arr1[start], arr2[end]});
                }
            }

            start++; // Move to next different element in arr1
            end--;   // Move to next different element in arr2
        } 
        else if (sum > target) {
            end--; // Decrease sum
        } 
        else {
            start++; // Increase sum
        }
    }

    return result;
}
