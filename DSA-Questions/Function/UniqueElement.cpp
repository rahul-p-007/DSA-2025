#include <bits/stdc++.h>
using namespace std;

int UniqueElement(vector<int> arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        count ^= arr[i];
    }
    return count;
}
int main()
{
    vector<int> v = {1, 1, 3, 3, 9, 4, 5, 6, 7, 6, 7, 5, 4};
    cout << "Unquie Element : " << UniqueElement(v);

    return 0;
}
