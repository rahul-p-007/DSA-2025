#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int> &arr)
{
    // Write your code here
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    vector<int> arr1 = {1, 1, 2, 2, 3};       // Expected output: 3
    vector<int> arr2 = {4, 4, 5, 5, 7, 7, 8}; // Expected output: 8
    vector<int> arr3 = {9, 9, 10};            // Expected output: 10
    vector<int> arr4 = {6};                   // Expected output: 6 (only one element)

    cout << "Unique element in arr1: " << singleNonDuplicate(arr1) << endl;
    cout << "Unique element in arr2: " << singleNonDuplicate(arr2) << endl;
    cout << "Unique element in arr3: " << singleNonDuplicate(arr3) << endl;
    cout << "Unique element in arr4: " << singleNonDuplicate(arr4) << endl;

    return 0;
}