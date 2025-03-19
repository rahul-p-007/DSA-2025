#include <iostream>
using namespace std;
// T(°C) = (T(°F) - 32) × 5/9
float Temp(float temp, int choice)
{
    float temperature;
    if (choice == 1)
    {
        temperature = (temp - 32) * 5 / 9;
    }
    else if (choice == 2)
    {
        temperature = (temp + 32) * 9 / 5;
    }
    else
    {
        return 0;
    }
    return temperature;
}

int main()
{
    float temp;

    int choice;
    cout << "Enter the temperature and choice : ";
    cin >> temp >> choice;
    cout << "Temperature : " << Temp(temp, choice);

    return 0;
}