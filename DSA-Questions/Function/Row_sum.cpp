#include <bits/stdc++.h>
using namespace std;

void row_sum(int arr[][3])
{
    cout << "Printing the sum of 2-d array in row wise" << endl;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
        cout << endl;
    }
}
void col_sum(int arr[][3])
{
    cout << "Printing the sum of 2-d array in col wise" << endl;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << " ";
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    row_sum(arr);
    cout << endl;
    col_sum(arr);
}