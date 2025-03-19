#include <bits/stdc++.h>
using namespace std;
vector<int> UnionElement(vector<int> arr, vector<int> brr)
{
    vector<int> unionElemnet;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                brr[i] = INT_MIN;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != INT_MIN)
        {
            unionElemnet.push_back(arr[i]);
        }
    }
    for (int i = 0; i < brr.size(); i++)
    {
        if (brr[i] != INT_MIN)
        {
            unionElemnet.push_back(brr[i]);
        }
    }
    return unionElemnet;
}

int main()
{
    vector<int> v = {1, 1, 3, 3, 9, 4, 5, 6, 7, 6, 7, 5, 4};
    vector<int> b = {8, 9, 10, 11};
    vector<int> ans = UnionElement(v, b);
    // Print the element
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
