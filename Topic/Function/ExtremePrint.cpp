#include <iostream>
#include <limits.h>
using namespace std;
void ExtremePrint(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (true)
    {
        if (start > end)
        {
            break;
        }
        else if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }

        start++;
        end--;
    }
}
int main()
{

    int arr[] = {1, 2, 4, 5, 7};
    ExtremePrint(arr, 5);
    return 0;
}