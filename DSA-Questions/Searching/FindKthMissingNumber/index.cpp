#include<bits/stdc++.h>
using namespace std;

int FindKthMissingNumber(vector<int> arr,int k){
    int low = 0;
    int high = arr.size() - 1;
    while(low<= high){
        int mid = low + (high - low) / 2;
        int missing = arr[mid] - (mid + 1);
        if(missing < k){
            low = mid + 1;
        }else {
            high = mid - 1;
        }
    }
    return low + k; 
}
int main() {
    vector<int> arr1 = {2, 3, 4, 7, 11};
    int k1 = 5;
    cout << "Test 1: " << FindKthMissingNumber(arr1, k1) << endl; // Expected: 9

    vector<int> arr2 = {1, 2, 3, 4};
    int k2 = 2;
    cout << "Test 2: " << FindKthMissingNumber(arr2, k2) << endl; // Expected: 6

    vector<int> arr3 = {3, 6, 9, 12};
    int k3 = 4;
    cout << "Test 3: " << FindKthMissingNumber(arr3, k3) << endl; // Expected: 7

    vector<int> arr4 = {5, 6, 7, 8};
    int k4 = 1;
    cout << "Test 4: " << FindKthMissingNumber(arr4, k4) << endl; // Expected: 1

    vector<int> arr5 = {1, 3, 5, 10};
    int k5 = 6;
    cout << "Test 5: " << FindKthMissingNumber(arr5, k5) << endl; // Expected: 8
}