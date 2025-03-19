#include <iostream>
using namespace std;

int main()
{
    int size_row;
    cin >> size_row;
    for (int row = 0; row < size_row; row++)
    {
        for (int star = 0; star < size_row; star++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}