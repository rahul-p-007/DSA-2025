#include <iostream>
using namespace std;

void VowelorConconent(char ch)
{

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "Vowel Character";
    }
    else
    {
        cout << "Consonat Character";
    }
}
int main()
{
    char size;
    cin >> size;
    VowelorConconent(size);
    return 0;
}