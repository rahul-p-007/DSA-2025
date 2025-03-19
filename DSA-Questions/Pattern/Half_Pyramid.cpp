#include <iostream>
using namespace std;

/*

*
* *
* * *
* * * *
* * * * *

*/
int main()
{
    int size;
    cin >> size;

    for (int row = 0; row < size; row++)
    {
        for (int star = 0; star < row + 1; star++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}