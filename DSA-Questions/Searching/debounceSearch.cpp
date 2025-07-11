#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr,int start,int end,int target){
;
  
    while(start<= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target)
        {
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return -1;
}
int debounceSearch(vector<int> arr,int n,int target)
{
    if(arr[0] == target){
        return 0;
    }

    int i = 1;
    while(i<n && arr[i]<= target){
        i *= 2;

    }

    return binarySearch(arr, i / 2, min(i, n - 1), target);
}

int main() {
    vector<vector<int>> testArrays = {
        {1, 3, 5, 7, 9, 11, 13, 15},
        {2, 4, 6, 8, 10, 12, 14},
        {5, 10, 15, 20, 25, 30, 35},
        {10, 20, 30, 40, 50},
        {42},
        {42}
    };
    
    vector<int> targets = {7, 2, 35, 25, 42, 24};

    for (size_t i = 0; i < testArrays.size(); i++) {
        int result = debounceSearch(testArrays[i], testArrays[i].size(), targets[i]);
        cout << "Test Case " << i + 1 << ": Target " << targets[i] 
             << " -> Index " << result << endl;
    }

    return 0;
}