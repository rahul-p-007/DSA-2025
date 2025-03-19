#include <iostream>
using namespace std;
// void swapElement(int start, int end)
// {
//     int temp = start;
//     start = end;
//     end = temp;
// }
void ReverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        // Swap using + and -
        // arr[start] = arr[start] + arr[end];
        // arr[end] = arr[start] - arr[end];
        // arr[start] = arr[start] - arr[end];

        // Swap using XOR
        /*
        a = a ^ b;
        b = a ^ b;  // Now b = (a ^ b) ^ b = a
        a = a ^ b;  // Now a = (a ^ b) ^ a = b

        */
        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[start] ^ arr[end];
        arr[start] = arr[start] ^ arr[end];
        start++;
        end--;
    }
}
void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 4, 5, 7};
    ReverseArr(arr, 5);
    PrintArray(arr, 5);
    return 0;
}