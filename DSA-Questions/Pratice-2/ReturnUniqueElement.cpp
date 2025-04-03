#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       // base case
       if(nums.size() == 0){
        return 0;
    }
    int i = 0;
    for(int j = 1; j<nums.size(); j++){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i+1;
}
};

// Function to test multiple cases
void runTests() {
    Solution sol;

    vector<vector<int>> testCases = {
        {1, 1, 2, 2, 3, 3, 4, 5, 5},  // Expected Output: 5
        {0, 0, 1, 1, 2, 2, 3, 3, 4},  // Expected Output: 5
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},  // Expected Output: 10 (all unique)
        {5, 5, 5, 5, 5, 5, 5, 5, 5},  // Expected Output: 1 (all same)
        {10, 20, 30, 40, 50, 10, 20, 30},  // Expected Output: 5
        {},  // Edge Case: Empty array -> Expected Output: 0
        {100},  // Edge Case: Single element -> Expected Output: 1
    };

    for (int i = 0; i < testCases.size(); i++) {
        cout << "Test Case " << i + 1 << " Output: " << sol.removeDuplicates(testCases[i]) << endl;
    }
}

// Main function
int main() {
    runTests();
    return 0;
}
