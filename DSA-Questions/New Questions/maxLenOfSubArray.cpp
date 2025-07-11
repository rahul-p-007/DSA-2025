#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& nums, int k) {
        unordered_map<int, int> m; // prefixSum -> first index
        int sum = 0;
        int maxLen = 0;

        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];

            if (sum == k) {
                maxLen = j + 1; // subarray from 0 to j
            }

            int val = sum - k;
            if (m.find(val) != m.end()) {
                maxLen = max(maxLen, j - m[val]);
            }

            // Store the first occurrence of sum
            if (m.find(sum) == m.end()) {
                m[sum] = j;
            }
        }

        return maxLen;
}