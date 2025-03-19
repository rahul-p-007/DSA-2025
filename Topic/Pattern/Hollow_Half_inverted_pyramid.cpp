#include <iostream>
using namespace std;
/*
1234
2 5
35
4


*/
int main()
{
    int size;
    cin >> size;
    for (int row = 0; row < size; row++)
    {
        int start = 1;
        for (int col = 0; col < size - row - 1; col++)
        {
            if (col == 0)
            {
                cout << row + 1;
            }
            else if (row == 0)
            {
                cout << col + 1;
            }

            else
            {
                if (col == size - row - 2)
                {
                    cout << "5";
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