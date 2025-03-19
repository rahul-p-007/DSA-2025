#include <iostream>
using namespace std;
void ReverseArr(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 4, 5, 7};
    ReverseArr(arr, 5);
    return 0;
}