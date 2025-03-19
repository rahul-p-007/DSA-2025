#include <iostream>
using namespace std;
int LinearSearch(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return 0;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << LinearSearch(arr, 7, 5);

    return 0;
}