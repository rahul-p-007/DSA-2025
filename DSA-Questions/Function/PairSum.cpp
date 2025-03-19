#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> PairSum(vector<int> arr, vector<int> brr, int target)
{
    int start = 0;
    int end = brr.size() - 1;
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    vector<pair<int, int>> result;
    while (start < arr.size() && end >= 0)
    {
        int sum = arr[start] + brr[end];
        if (sum == target)
        {
            result.push_back({arr[start], brr[end]});
            start++;
            end--;
        }
        else if (sum > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return result;
}

int main()
{
    vector<int> v = {1, 1, 3, 3, 9, 4, 5, 6, 7, 6, 7, 5, 4};
    vector<int> b = {8, 9, 10, 11};
    vector<pair<int, int>> ans = PairSum(v, b, 15);
    for (auto &p : ans)
    {
        cout << "(" << p.first << "," << p.second << ")";
    }
}