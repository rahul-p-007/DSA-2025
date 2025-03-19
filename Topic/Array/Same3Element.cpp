#include <bits/stdc++.h>
using namespace std;

int HaveThreeElement(vector<int> arr1, vector<int> arr2, vector<int> arr3)
{

    int result = 0;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            for (int k = 0; k < arr3.size(); j++)
            {
                if (arr1[i] == arr2[j] == arr3[k])
                {
                    result = 1;
                    cout << arr1[i] << " " << arr2[j] << " " << arr3[3] << endl;
                    break;
                }
            }
        }
    }

    return result;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 6, 7, 9};
    vector<int> arr3 = {1, 2, 3, 5, 6};

    cout << HaveThreeElement(arr1, arr2, arr3);
}