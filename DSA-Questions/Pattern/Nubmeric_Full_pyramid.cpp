#include <iostream>
using namespace std;

/*

     1
    232
   34543
  4567654
 567898765



*/

int main()
{
    int size;
    cin >> size;
    for (int row = 0; row < size; row++)
    {

        for (int space = 0; space < size - row; space++)
        {
            cout << " ";
        }

        for (int number = 0; number < row + 1; number++)
        {

            cout << row + number + 1;
        }
        int start = 2 * row;
        for (int reverse_number = 0; reverse_number < row; reverse_number++)
        {
            cout << start;
            start--;
        }
        cout << endl;
    }
}