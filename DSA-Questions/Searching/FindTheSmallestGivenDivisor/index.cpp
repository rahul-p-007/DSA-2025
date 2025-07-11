<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

bool FindSumOFDivisor(vector<int> arr,int thersold,int mid){
    int sum = 0;
    for (int i = 0; i < arr.size(); i++){
        sum += ceil((double)arr[i] /(double)mid);
    }
    if(sum <= thersold){
        return true;
    }
    return false;
}
int FindSmallestDivisorThersold(vector<int> arr,int thersold){
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());
    int ans = -1;
    while(low<= high){
        int mid = low + (high - low) / 2;
        if((FindSumOFDivisor(arr,thersold,mid))){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}
int main() {
    vector<int> arr1 = {1, 2, 5, 9};
    int threshold1 = 6;
    cout << "Test 1: " << FindSmallestDivisorThersold(arr1, threshold1) << endl; // Expected: 5

    vector<int> arr2 = {44, 22, 33, 11, 1};
    int threshold2 = 5;
    cout << "Test 2: " << FindSmallestDivisorThersold(arr2, threshold2) << endl; // Expected: 44

    vector<int> arr3 = {2, 3, 5, 7, 11};
    int threshold3 = 11;
    cout << "Test 3: " << FindSmallestDivisorThersold(arr3, threshold3) << endl; // Expected: 1

    vector<int> arr4 = {19, 11, 17};
    int threshold4 = 6;
    cout << "Test 4: " << FindSmallestDivisorThersold(arr4, threshold4) << endl; // Expected: 6
}
=======
#include<bits/stdc++.h>
using namespace std;

bool FindSumOFDivisor(vector<int> arr,int thersold,int mid){
    int sum = 0;
    for (int i = 0; i < arr.size(); i++){
        sum += ceil((double)arr[i] /(double)mid);
    }
    if(sum <= thersold){
        return true;
    }
    return false;
}
int FindSmallestDivisorThersold(vector<int> arr,int thersold){
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());
    int ans = -1;
    while(low<= high){
        int mid = low + (high - low) / 2;
        if((FindSumOFDivisor(arr,thersold,mid))){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}
int main() {
    vector<int> arr1 = {1, 2, 5, 9};
    int threshold1 = 6;
    cout << "Test 1: " << FindSmallestDivisorThersold(arr1, threshold1) << endl; // Expected: 5

    vector<int> arr2 = {44, 22, 33, 11, 1};
    int threshold2 = 5;
    cout << "Test 2: " << FindSmallestDivisorThersold(arr2, threshold2) << endl; // Expected: 44

    vector<int> arr3 = {2, 3, 5, 7, 11};
    int threshold3 = 11;
    cout << "Test 3: " << FindSmallestDivisorThersold(arr3, threshold3) << endl; // Expected: 1

    vector<int> arr4 = {19, 11, 17};
    int threshold4 = 6;
    cout << "Test 4: " << FindSmallestDivisorThersold(arr4, threshold4) << endl; // Expected: 6
}
>>>>>>> 3ffe28cfedf2733f8d30d5c7eedde94246a74e32
