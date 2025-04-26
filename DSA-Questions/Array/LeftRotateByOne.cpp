#include<bits/stdc++.h>
using namespace std;
// Brute Force
vector<int> LeftRotateByOne(vector<int> arr){
    int temp = arr[0];
    for (int i = 1; i < arr.size(); i++){
        arr[i - 1] = arr[i];
    }
    arr[arr.size() - 1] = temp;
    return arr;
}

int main() {
    // Test case 1
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> result1 = LeftRotateByOne(arr1);
    cout << "Test Case 1: ";
    for (int num : result1) cout << num << " ";
    cout << endl;

    // Test case 2
    vector<int> arr2 = {10, 20, 30, 40};
    vector<int> result2 = LeftRotateByOne(arr2);
    cout << "Test Case 2: ";
    for (int num : result2) cout << num << " ";
    cout << endl;

    // Test case 3
    vector<int> arr3 = {5};
    vector<int> result3 = LeftRotateByOne(arr3);
    cout << "Test Case 3: ";
    for (int num : result3) cout << num << " ";
    cout << endl;

    // Test case 4
    vector<int> arr4 = {9, 8, 7, 6, 5};
    vector<int> result4 = LeftRotateByOne(arr4);
    cout << "Test Case 4: ";
    for (int num : result4) cout << num << " ";
    cout << endl;

    return 0;
}