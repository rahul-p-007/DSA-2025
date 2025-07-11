#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int pivotElement(vector<int> nums)
    {
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (start == end)
            {
                return start;
            }
            if (mid <= end && nums[mid] > nums[mid + 1])
            {
                return mid;
            }
            if (mid - 1 >= start && nums[mid - 1] > nums[mid])
            {
                return mid - 1;
            }
            if (nums[start] > nums[mid])
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

    int binarySearch(vector<int> nums, int start, int end, int target)
    {
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return -1;
    }
    int search(vector<int> &nums, int target)
    {
        int pivotIndex = pivotElement(nums);
        int ans = 0;
        if (target >= nums[0] && target <= nums[pivotIndex])
        {
            ans = binarySearch(nums, 0, pivotIndex, target);
        }
        else
        {
            ans = binarySearch(nums, pivotIndex + 1, nums.size() - 1, target);
        }
        return ans;
    }
};