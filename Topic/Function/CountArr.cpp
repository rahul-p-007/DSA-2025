#include <iostream>
using namespace std;
void CountBinary(int arr[], int size)
{
    int one = 0;
    int zero = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
    }
    cout << "Number of zero " << zero << "\n"
         << "Number of one " << one;
}
int main()
{

    int arr[] = {1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 2, 4, 5, 7, 1};
    CountBinary(arr, 16);
    return 0;
}