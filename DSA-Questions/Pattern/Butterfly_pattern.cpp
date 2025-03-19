/*
*    *
**  **
******
**  **
*    *


*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

*/

#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    for (int row = 0; row < size; row++)
    {
        // Left stars
        for (int star = 0; star < row + 1; star++)
        {
            cout << "* ";
        }

        // Spaces in the middle
        for (int space = 0; space < 2 * size - 2 * row - 2; space++)
        {
            cout << "  "; // Two spaces for alignment
        }

        // Right stars
        for (int star = 0; star < row + 1; star++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int row = 0; row < size; row++)
    {
        for (int star = 0; star < size - row; star++)
        {
            cout << "* ";
        }
        for (int space = 0; space < 2 * row; space++)
        {
            cout << "  ";
        }
        for (int star = 0; star < size - row; star++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
