#include <iostream>
using namespace std;
void nStarTriangle(int n)
{
    // Write your code here.
    for (int row = 0; row < n; row++)
    {

        for (int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }

        for (int star = 0; star < 2 * row + 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int size;
    cin >> size;

    // for (int row = 0; row < 3; row++)
    // {

    //     for (int col = 0; col < 5; col++)
    //     {
    //         if (row == 0 || row == 2)
    //         {
    //             cout << "* ";
    //         }
    //         if (col == 0 || col == 4)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    nStarTriangle(size);
    return 0;
}