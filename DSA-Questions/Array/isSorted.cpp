#include<bits/stdc++.h>
using namespace std;

int isSorted(vector<int> arr){
    // base case
    if(arr.size() == 0){
        return false;
    }
    for (int i = 1; i < arr.size(); i++){
        if(arr[i] >= arr[i-1]){

        }else{
            return false;
        }
    }
    return true;
}

int main() {
    vector<vector<int>> testCases = {
        {1, 2, 3, 4, 5},       // Sorted
        {5, 5, 5, 5, 5},       // Sorted (all elements equal)
        {1, 3, 2, 4, 5},       // Not sorted
        {10, 20, 30, 25, 40},  // Not sorted
        {1},                   // Single element (considered sorted)
        {},                    // Empty array 
        {1, 2, 2, 3, 4}        // Sorted with duplicates
    };

    for (int i = 0; i < testCases.size(); i++) {
        cout << "Test Case " << i + 1 << ": ";
        for (auto num : testCases[i]) {
            cout << num << " ";
        }
        cout << "\n";

        if (isSorted(testCases[i])) {
            cout << "Result: Array is sorted.\n";
        } else {
            cout << "Result: Array is NOT sorted.\n";
        }
        cout << "-----------------------------\n";
    }

    return 0;
}