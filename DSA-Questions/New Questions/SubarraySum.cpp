#include<bits/stdc++.h>
using namespace std;

int  SubArraySumOFK(vector<int> arr,int k ){
    int count = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = i; j < n;j++){
            sum += arr[j];
            if (sum == k ){
                count++;
            }
        }
    }
    return count;
}

int main() {
     vector<int> arr = {1, 2, 3, -1, 1, 2};
    int k = 3;

    cout << "Number of subarrays with sum " << k << " is: " << SubArraySumOFK(arr, k) << endl;

    return 0;
}