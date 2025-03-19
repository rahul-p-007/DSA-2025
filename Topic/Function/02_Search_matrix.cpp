#include <bits/stdc++.h>
using namespace std;

bool Search_matrix(int arr[][3], int target)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int ans = Search_matrix(arr, 101);
    if (ans)
    {
        cout << "Elemen is There";
    }
    else
    {
        cout << "Element is not there!!!!!!";
    }
}