#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    for (int row = 0; row < size; row++)
    {
        int start = 1;
        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0)
            {
                cout << row + 1;
            }
            else if (row == size - 1)
            {
                cout << start;
                start++;
            }
            else
            {
                if (col == 0)
                {
                    cout << "1";
                }
                else if (col == row)
                {
                    cout << row + 1;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}