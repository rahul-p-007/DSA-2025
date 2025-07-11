#include<bits/stdc++.h>
using namespace std;
void ReverseArray(vector<int>& arr){
    int start = 0;
    int end = arr.size() - 1;
    while(start < end){
        
        // Swaping Methods 
        // #1
        // swap(arr[start], arr[end]);
        // #2
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        // #3
        // arr[start] = arr[start] + arr[end];
        // arr[end] = arr[start] - arr[end];
        // arr[start] = arr[start] - arr[end];
        // #4
        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[start] ^ arr[end];
        arr[start] = arr[start] ^ arr[end];

        start++;
        end--;
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    ReverseArray(arr);

    cout << "Reversed array: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
