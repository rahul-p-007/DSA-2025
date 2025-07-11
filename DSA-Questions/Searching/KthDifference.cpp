#include <bits/stdc++.h>
using namespace std;
// using Two pointer Approach
class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        int start = 0;
        int end = 1;
        sort(nums.begin(), nums.end());
        set<pair<int, int>> ans;
        while (end < nums.size())
        {
            int diff = nums[end] - nums[start];
            if (diff == k)
            {
                ans.insert({nums[start], nums[end]});
                start++;
                end++;
            }
            else if (diff > k)
            {
                start++;
            }
            else
            {
                end++;
            }
            if (start == end)
                end++;
        }
        return ans.size();
    }
};
// Using Binary Search

class Solution
{
public:
    int binarySearch(vector<int> nums, int start, int k)
    {
        int end = nums.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == k)
            {
                return mid;
            }
            else if (nums[mid] > k)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return -1;
    }
    int findPairs(vector<int> &nums, int k)
    {
        set<pair<int, int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (binarySearch(nums, i + 1, nums[i] + k) != -1)
            {
                ans.insert({nums[i], nums[i] + k});
            }
        }
        return ans.size();
    }
};