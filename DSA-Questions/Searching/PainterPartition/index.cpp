#include<bits/stdc++.h>
using namespace std;

int FindMinPrinter(vector<int> arr,int painter){
    long long WallCount = 0;
    int PainterCnt = 1;
    for (int i = 0; i < arr.size(); i++){
        if(WallCount  + arr[i] <= painter){
            WallCount += arr[i];
        }else{
            PainterCnt++;
            WallCount = arr[i];
        }
    }
    return PainterCnt;
}

int PainterPartition(vector<int> arr, int painter){
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    while(low<= high){
        int mid = low + (high - low) / 2;
        int NumberOfPainter = FindMinPrinter(arr, mid);
        if(NumberOfPainter <= painter){
            high = mid - 1;
        }else{
            
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    vector<int> walls1 = {10, 20, 30, 40};
    int painters1 = 2;
    cout << "Test 1: " << PainterPartition(walls1, painters1) << endl; // Expected: 60

    vector<int> walls2 = {5, 5, 5, 5};
    int painters2 = 2;
    cout << "Test 2: " << PainterPartition(walls2, painters2) << endl; // Expected: 10

    vector<int> walls3 = {10, 10, 10, 10, 10};
    int painters3 = 3;
    cout << "Test 3: " << PainterPartition(walls3, painters3) << endl; // Expected: 20

    vector<int> walls4 = {1, 8, 11, 3};
    int painters4 = 2;
    cout << "Test 4: " << PainterPartition(walls4, painters4) << endl; // Expected: 14
}
