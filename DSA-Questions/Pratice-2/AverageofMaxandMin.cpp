<<<<<<< HEAD
#include<bits/stdc++.h>
/*
You are given a 0-indexed integer array nums of even length.

As long as nums is not empty, you must repetitively:

Find the minimum number in nums and remove it.
Find the maximum number in nums and remove it.
Calculate the average of the two removed numbers.
The average of two numbers a and b is (a + b) / 2.

For example, the average of 2 and 3 is (2 + 3) / 2 = 2.5.
Return the number of distinct averages calculated using the above process.

Note that when there is a tie for a minimum or maximum number, any can be removed.

 

Example 1:

Input: nums = [4,1,4,0,3,5]
Output: 2
Explanation:
1. Remove 0 and 5, and the average is (0 + 5) / 2 = 2.5. Now, nums = [4,1,4,3].
2. Remove 1 and 4. The average is (1 + 4) / 2 = 2.5, and nums = [4,3].
3. Remove 3 and 4, and the average is (3 + 4) / 2 = 3.5.
Since there are 2 distinct numbers among 2.5, 2.5, and 3.5, we return 2.
Example 2:

Input: nums = [1,100]
Output: 1
Explanation:
There is only one average to be calculated after removing 1 and 100, so we return 1.


*/

using namespace std;
class Solution {
    public:
        int distinctAverages(vector<int>& nums) {
            unordered_set<double> mySet;  
            sort(nums.begin(), nums.end()); 
    
            int low = 0, high = nums.size() - 1;
            
            while (low < high) {
                double avg = (nums[low] + nums[high]) / 2.0;
                mySet.insert(avg);
                low++;
                high--;
            }
    
            return mySet.size(); 
        }
    };
    
    // Function to test multiple cases
void runTests() {
    Solution sol;

    vector<vector<int>> testCases = {
        {9,5,7,8,7,9,8,2,0,7},  // Expected Output: 5
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},  // Expected Output: 5
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4},  // Expected Output: 1
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},  // Expected Output: 5
        {9, 8, 7, 6, 5, 4, 3, 2, 1, 0},  // Expected Output: 5
        {1000000, 999999, 888888, 777777, 666666, 555555, 444444, 333333, 222222, 111111},  // Expected Output: 5
        {3, 6, 9, 12, 15, 18, 21}  // Expected Output: 3
    };

    for (int i = 0; i < testCases.size(); i++) {
        cout << "Test Case " << i + 1 << " Output: " << sol.distinctAverages(testCases[i]) << endl;
    }
}

// Main function
int main() {
    runTests();
    return 0;
=======
#include<bits/stdc++.h>
/*
You are given a 0-indexed integer array nums of even length.

As long as nums is not empty, you must repetitively:

Find the minimum number in nums and remove it.
Find the maximum number in nums and remove it.
Calculate the average of the two removed numbers.
The average of two numbers a and b is (a + b) / 2.

For example, the average of 2 and 3 is (2 + 3) / 2 = 2.5.
Return the number of distinct averages calculated using the above process.

Note that when there is a tie for a minimum or maximum number, any can be removed.

 

Example 1:

Input: nums = [4,1,4,0,3,5]
Output: 2
Explanation:
1. Remove 0 and 5, and the average is (0 + 5) / 2 = 2.5. Now, nums = [4,1,4,3].
2. Remove 1 and 4. The average is (1 + 4) / 2 = 2.5, and nums = [4,3].
3. Remove 3 and 4, and the average is (3 + 4) / 2 = 3.5.
Since there are 2 distinct numbers among 2.5, 2.5, and 3.5, we return 2.
Example 2:

Input: nums = [1,100]
Output: 1
Explanation:
There is only one average to be calculated after removing 1 and 100, so we return 1.


*/

using namespace std;
class Solution {
    public:
        int distinctAverages(vector<int>& nums) {
            unordered_set<double> mySet;  
            sort(nums.begin(), nums.end()); 
    
            int low = 0, high = nums.size() - 1;
            
            while (low < high) {
                double avg = (nums[low] + nums[high]) / 2.0;
                mySet.insert(avg);
                low++;
                high--;
            }
    
            return mySet.size(); 
        }
    };
    
    // Function to test multiple cases
void runTests() {
    Solution sol;

    vector<vector<int>> testCases = {
        {9,5,7,8,7,9,8,2,0,7},  // Expected Output: 5
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},  // Expected Output: 5
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4},  // Expected Output: 1
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},  // Expected Output: 5
        {9, 8, 7, 6, 5, 4, 3, 2, 1, 0},  // Expected Output: 5
        {1000000, 999999, 888888, 777777, 666666, 555555, 444444, 333333, 222222, 111111},  // Expected Output: 5
        {3, 6, 9, 12, 15, 18, 21}  // Expected Output: 3
    };

    for (int i = 0; i < testCases.size(); i++) {
        cout << "Test Case " << i + 1 << " Output: " << sol.distinctAverages(testCases[i]) << endl;
    }
}

// Main function
int main() {
    runTests();
    return 0;
>>>>>>> 3ffe28cfedf2733f8d30d5c7eedde94246a74e32
}