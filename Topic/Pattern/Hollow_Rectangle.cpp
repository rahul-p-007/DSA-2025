#include <iostream>
using namespace std;
// Hollow Rectangle
int main()
{
    int size_row, size_col;
    cin >> size_row >> size_col;
    for (int row = 0; row < size_row; row++)
    {
        for (int col = 0; col < size_col; col++)
        {
            if (row == 0 || row == size_row - 1 || col == 0 || col == size_col - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
