#include <iostream>
using namespace std;

int main()
{
    int size_row, size_col;
    cin >> size_row >> size_col;
    for (int row = 0; row < size_row; row++)
    {
        for (int star = 0; star < size_col; star++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}