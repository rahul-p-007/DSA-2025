#include <bits/stdc++.h>
using namespace std;

void ExtremePrint(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start];
            break;
        }
        else
        {

            cout << arr[start] << " ";
            cout << arr[end] << " ";
            start++;
            end--;
        }
    }
}
// void Revese(vector<int> arr)
// {
//     int end = arr.size() - 1;
//     while (end >= 0)
//     {

//         cout << arr[end] << " ";

//         end--;
//     }
// }
void ReveseTwoPointer(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {

        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 44};
    // ExtremePrint(v);
    // Revese(v);
    ReveseTwoPointer(v);
    for (auto num : v)
    {
        cout << num << " ";
    }

    return 0;
}