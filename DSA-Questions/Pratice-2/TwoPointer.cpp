#include<bits/stdc++.h>
using namespace std;
bool TwoPointerAlgo(vector<int> arr,int target){
    int start = 0;
    int end = arr.size() - 1;
    while(start< end){
        int sum = arr[start] + arr[end];
        if(sum == target){
            return true;
        }else if(sum > target){
            end--;
        }else{
            start++;
        }
    }
    return false;
}
int main() {
    vector<vector<int>> testCases = {
        {1, 2, 3, 4, 5, 6},   // Sorted array
        {2, 4, 7, 11, 15},    // Sorted array with no duplicate values
        {1, 3, 5, 8, 12},     // Sorted array with no valid pairs
        {-5, -3, 0, 2, 5, 7}, // Array with negative numbers
        {10, 20, 30, 40, 50}  // Large numbers
    };
    
    vector<int> targets = {9, 10, 20, -1, 70}; // Target sums for each test case

    for (int i = 0; i < testCases.size(); i++) {
        cout << "Test Case " << i + 1 << ": ";
        bool result = TwoPointerAlgo(testCases[i], targets[i]);
        cout << (result ? "Pair Found" : "No Pair Found") << endl;
    }

    return 0;
}