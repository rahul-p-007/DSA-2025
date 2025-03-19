#include <iostream>
#include <limits.h>
using namespace std;
int MaxArr(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{

    int arr[] = {1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 2, 4, 5, 7, 1};
    cout << "Maximum Element of the array: " << MaxArr(arr, 16);
    return 0;
}