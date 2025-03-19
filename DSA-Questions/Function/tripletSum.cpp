#include <bits/stdc++.h>
using namespace std;
// void TripletSum(vector<int> arr, int x)
// {
//     vector<int> unionElemnet;
//     for (int i = 0; i < arr.size(); i++)

//     {
//         int element1 = arr[i];
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             int element2 = arr[j];
//             for (int k = j + 1; k < arr.size(); k++)
//             {
//                 if (element1 + element2 + arr[k] == x)
//                 {
//                     cout << "(" << element1 << "," << element2 << "," << arr[k] << ")" << endl;
//                 }
//             }
//         }
//     }
// }
void TripletSum(vector<int> arr, int x)
{

    sort(arr.begin(), arr.end());
    int n = arr.size();
    for (int i = 0; i < n - 2; i++)
    {
        int start = i + 1;
        int end = n - 1;
        while (start < end)
        {
            int sum = arr[start] + arr[end] + arr[i];
            if (sum == x)
            {
                cout << "(" << arr[i] << "," << arr[start] << "," << arr[end] << ")" << endl;

                start++; // Move left pointer
                end--;   // Move right pointer
            }
            else if (sum > x)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 8};

    TripletSum(v, 14);
}