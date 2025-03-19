#include <iostream>
using namespace std;
/*
* * * * *
* * * *
* * *
* *
*

*/
int main()
{
    int size;
    cin >> size;

    for (int row = 0; row < size; row++)
    {
        for (int star = 0; star < size - row; star++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}