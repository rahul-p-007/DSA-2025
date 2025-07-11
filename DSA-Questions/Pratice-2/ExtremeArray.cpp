<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

void PrintExtremeArray(vector<int> arr) {
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end) {
        if (start == end) {
            cout << arr[start] << " ";
        } else {
            cout << arr[start] << " " << arr[end] << " ";
        }
        start++;
        end--;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};  // Test case
    PrintExtremeArray(arr);
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

void PrintExtremeArray(vector<int> arr) {
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end) {
        if (start == end) {
            cout << arr[start] << " ";
        } else {
            cout << arr[start] << " " << arr[end] << " ";
        }
        start++;
        end--;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};  // Test case
    PrintExtremeArray(arr);
    return 0;
>>>>>>> 3ffe28cfedf2733f8d30d5c7eedde94246a74e32
}