#include<bits/stdc++.h>
using namespace std;

int uniqueElement(vector<int>arr){

    int reuslt = 0;

    for (int i = 0; i < arr.size();i++){
        reuslt ^= arr[i];
    }
    return reuslt;
}
int main() {
    vector<int> arr1 = {2, 3, 5, 4, 5, 3, 4};  // Unique: 2
    vector<int> arr2 = {10, 20, 10, 30, 20};   // Unique: 30
    vector<int> arr3 = {99};                  // Only 1 element

    cout << "Unique in arr1: " << uniqueElement(arr1) << endl;
    cout << "Unique in arr2: " << uniqueElement(arr2) << endl;
    cout << "Unique in arr3: " << uniqueElement(arr3) << endl;

    return 0;
}
