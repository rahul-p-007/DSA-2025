#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    for (int row = 0; row < size; row++)
    {
        for (int space = 0; space < size - row - 1; space++)
        {
            cout << " ";
        }
        for (int num = 0; num < row + 1; num++)
        {
            cout << num + 1;
        }
        int start = row;
        for (int reverse = 0; reverse < row; reverse++)
        {
            cout << start;
            start--;
        }
        cout << endl;
    }

    return 0;
}