#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    // sizeof(v) is not the correct way to get the number of elements
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;

    // Taking vector size input
    int size;
    cin >> size;

    vector<int> arr; // Create an empty vector
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;         // Read the value from input
        arr.push_back(value); // Push value into vector
    }

    // Printing the vector elements
    cout << "Array elements: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
