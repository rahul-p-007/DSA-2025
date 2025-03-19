#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> MAX_MIN(int arr[][3])
{
    int MAX = INT_MIN;
    int MIN = INT_MAX;
    vector<pair<int, int>> value;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > MAX)
            {
                MAX = arr[i][j];
            }
            if (arr[i][j] < MIN)
            {
                MIN = arr[i][j];
            }
        }
    }
    value.push_back({MAX, MIN});
    return value;
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    vector<pair<int, int>> ans = MAX_MIN(arr);
    for (auto rem : ans)
    {
        cout << "MAX AND MIN : " << rem.first << " " << rem.second;
    }
}