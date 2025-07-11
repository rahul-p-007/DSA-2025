<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int PeakElement(vector<int> arr){
    int n = arr.size() ;
    // Edge case
    if(n== 0){
        return 0;
    }
    if(arr[0] > arr[1]){
        return 0;
    }
    if(arr[n-1] > arr[n-2]){
        return n - 1;
    }

    int low = 1;
    int high = n - 2;

    while(low<= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid +1]){
            return mid;
        }else if(arr[mid] > arr[mid -1] ){
            low = mid + 1;
        }else if(arr[mid] > arr[mid +1]){
            high = mid - 1;
        }
        // For multiple peak element to avoid infinite while loop
        else{
            low = mid + 1;
        }
    }
    return -1;
}


int main() {
    vector<int> arr = {1, 3, 20, 4, 1, 0};
    int peakIndex = PeakElement(arr);
    cout << "Peak element is at index: " << peakIndex << endl;
    cout << "Peak element is: " << arr[peakIndex] << endl;
    return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;
int PeakElement(vector<int> arr){
    int n = arr.size() ;
    // Edge case
    if(n== 0){
        return 0;
    }
    if(arr[0] > arr[1]){
        return 0;
    }
    if(arr[n-1] > arr[n-2]){
        return n - 1;
    }

    int low = 1;
    int high = n - 2;

    while(low<= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid +1]){
            return mid;
        }else if(arr[mid] > arr[mid -1] ){
            low = mid + 1;
        }else if(arr[mid] > arr[mid +1]){
            high = mid - 1;
        }
        // For multiple peak element to avoid infinite while loop
        else{
            low = mid + 1;
        }
    }
    return -1;
}


int main() {
    vector<int> arr = {1, 3, 20, 4, 1, 0};
    int peakIndex = PeakElement(arr);
    cout << "Peak element is at index: " << peakIndex << endl;
    cout << "Peak element is: " << arr[peakIndex] << endl;
    return 0;
}
>>>>>>> 3ffe28cfedf2733f8d30d5c7eedde94246a74e32
