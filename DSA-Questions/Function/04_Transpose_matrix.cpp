#include <bits/stdc++.h>
using namespace std;

void Transpose_matrix(int arr[][3], int transposeArray[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposeArray[j][i] = arr[i][j];
        }
    }
}

void PrintArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    cout << "Before Transpose : " << endl;
    PrintArray(arr, 3, 3);
    int transposeArray[3][3];
    Transpose_matrix(arr, transposeArray);
    cout << "After Transpose : " << endl;
    PrintArray(transposeArray, 3, 3);
}