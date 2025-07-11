<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
bool FindPositionToPlace(vector<int> arr,int dist,int cows){
    int cntCows = 1;
    int CurCowPos = arr[0];
    for (int i = 0; i<arr.size(); i++){
        if(arr[i] - CurCowPos >= dist){
            cntCows++;
            CurCowPos = arr[i];
        }
    }
    if(cntCows >= cows){
        return true;
    }
    return false;
}

int AggressiveCows(vector<int>arr,int cows ){
    sort(arr.begin(), arr.end());
    int n = arr.size()-1;
    int low = 0;
    int high =  arr[n] - arr[0];
    while(low<= high){
        int mid = low + (high - low) / 2;
        if(FindPositionToPlace(arr,mid,cows)){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return high;
}

int main() {
    vector<int> stalls1 = {1, 2, 4, 8, 9};
    int cows1 = 3;
    cout << "Test 1: " << AggressiveCows(stalls1, cows1) << endl; // Expected: 3

    vector<int> stalls2 = {1, 2, 4, 8, 9, 10};
    int cows2 = 4;
    cout << "Test 2: " << AggressiveCows(stalls2, cows2) << endl; // Expected: 2

    vector<int> stalls3 = {10, 1, 2, 7, 5};
    int cows3 = 2;
    cout << "Test 3: " << AggressiveCows(stalls3, cows3) << endl; // Expected: 9

    vector<int> stalls4 = {1, 3, 5, 9, 12};
    int cows4 = 3;
    cout << "Test 4: " << AggressiveCows(stalls4, cows4) << endl; // Expected: 4
}
=======
#include<bits/stdc++.h>
using namespace std;
bool FindPositionToPlace(vector<int> arr,int dist,int cows){
    int cntCows = 1;
    int CurCowPos = arr[0];
    for (int i = 0; i<arr.size(); i++){
        if(arr[i] - CurCowPos >= dist){
            cntCows++;
            CurCowPos = arr[i];
        }
    }
    if(cntCows >= cows){
        return true;
    }
    return false;
}

int AggressiveCows(vector<int>arr,int cows ){
    sort(arr.begin(), arr.end());
    int n = arr.size()-1;
    int low = 0;
    int high =  arr[n] - arr[0];
    while(low<= high){
        int mid = low + (high - low) / 2;
        if(FindPositionToPlace(arr,mid,cows)){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return high;
}

int main() {
    vector<int> stalls1 = {1, 2, 4, 8, 9};
    int cows1 = 3;
    cout << "Test 1: " << AggressiveCows(stalls1, cows1) << endl; // Expected: 3

    vector<int> stalls2 = {1, 2, 4, 8, 9, 10};
    int cows2 = 4;
    cout << "Test 2: " << AggressiveCows(stalls2, cows2) << endl; // Expected: 2

    vector<int> stalls3 = {10, 1, 2, 7, 5};
    int cows3 = 2;
    cout << "Test 3: " << AggressiveCows(stalls3, cows3) << endl; // Expected: 9

    vector<int> stalls4 = {1, 3, 5, 9, 12};
    int cows4 = 3;
    cout << "Test 4: " << AggressiveCows(stalls4, cows4) << endl; // Expected: 4
}
>>>>>>> 3ffe28cfedf2733f8d30d5c7eedde94246a74e32
