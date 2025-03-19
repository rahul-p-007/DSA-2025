#include <iostream>
using namespace std;
/*


          1
         1 2
        1   3
       1     4
      1       5
     1         6
    1           7
   1             8
  1               9
 1 2 3 4 5 6 7 8 9 10


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
        int start = 1;
        for (int col = 0; col < 2 * row + 1; col++)
        {

            if (row == 0)
            {
                cout << col + 1;
            }
            else if (row == size - 1)
            {
                if (col % 2 != 0)
                {
                    cout << " ";
                }
                else
                {
                    cout << start;
                    start++;
                }
            }
            else
            {
                if (col == 0)
                {
                    cout << "1";
                }
                else if (col == 2 * row)
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
}