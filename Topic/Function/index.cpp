#include <iostream>
#include <math.h>
using namespace std;

int AreaOFCircle(int r)
{

    return 3.14 * (r * r);
}

void OddandEven(int n)
{
    if (n % 2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "Odd Number";
    }
}

int main()
{
    // int radius;
    // cin >> radius;
    // cout << "Area of the circle " << AreaOFCircle(radius);

    int n;
    cin >> n;
    cout << "Given the number is ";
    OddandEven(n);

    return 0;
}