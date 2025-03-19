#include <iostream>
using namespace std;
/*
                  *
                *   *
              *       *
            *           *
          *               *
        *                   *
      *                       *
    *                           *
  *                               *
*                                   *
*                                   *
  *                               *
    *                           *
      *                       *
        *                   *
          *               *
            *           *
              *       *
                *   *
                  *

*/
int main()
{
    int size;
    cin >> size;
    for (int row = 0; row < size; row++)
    {
        for (int space = 0; space < size - row - 1; space++)
        {
            cout << "  ";
        }
        for (int star = 0; star < 2 * row + 1; star++)
        {
            if (star == 0 || star == 2 * row)
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
    for (int row = 0; row < size; row++)
    {
        for (int space = 0; space < row; space++)
        {
            cout << "  ";
        }
        for (int star = 0; star < 2 * size - 2 * row - 1; star++)
        {
            if (star == 0 || star == 2 * size - 2 * row - 2)
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