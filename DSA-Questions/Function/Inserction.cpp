#include <bits/stdc++.h>
using namespace std;

vector<int> InsertionElement(vector<int> arr, vector<int> brr)
{
    vector<int> insertionElement;

    for (int i = 0; i < arr.size(); i++)

    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                // mark the element to prevent from duplicate element
                brr[j] = -1;
                insertionElement.push_back(arr[i]);
            }
        }
    }
    return insertionElement;
}

int main()
{
    vector<int> v = {1, 1, 3, 3, 9, 4, 5, 6, 7, 6, 7, 5, 4};
    vector<int> b = {8, 9, 10, 11, 3, 5};
    vector<int> ans = InsertionElement(v, b);
    // Print the answer
    for (int num : ans)
    {
        cout << num << " ";
    }
    return 0;
}