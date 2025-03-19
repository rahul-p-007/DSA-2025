#include <bits/stdc++.h>
using namespace std;
vector<int> UnionElement(vector<int> arr, vector<int> brr)
{
    vector<int> unionElemnet;
    for (int i = 0; i < arr.size(); i++)
    {
        int value = arr[i];
        unionElemnet.push_back(value);
    }
    for (int i = 0; i < brr.size(); i++)
    {
        int value = brr[i];
        unionElemnet.push_back(value);
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
