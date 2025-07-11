#include <bits/stdc++.h>
using namespace std;

int FindCeil(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return arr[mid];
        }
        else if (arr[mid] >= target)
        {
            ans = arr[mid];
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int FindFloor(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return arr[mid];
        }
        else if (arr[mid] < target)
        {
            ans = arr[mid];
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

vector<int> Answer(vector<int> arr, int target)
{
    int ceilNo = FindCeil(arr, target);
    int floorNo = FindFloor(arr, target);
    vector<int> StoreAnswer;
    StoreAnswer.push_back(ceilNo);
    StoreAnswer.push_back(floorNo);
    return StoreAnswer;
}
int main()
{
    vector<int> arr = {3, 4, 4, 7, 8, 10};

    vector<int> testCases = {2, 4, 6, 8, 9, 11};

    for (int target : testCases)
    {
        vector<int> result = Answer(arr, target);
        cout << "Target: " << target << " => Ceil: " << result[0] << ", Floor: " << result[1] << endl;
    }

    return 0;
}
