<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int FindTheDay(vector<int> arr,int day ,int m , int k){
    int count = 0;
    int ans = 0;

    for (int i = 0; i < arr.size(); i++){
        if(arr[i] <= day){
            count++;

        }else{
            ans += count / k;
            count = 0;
        }
    }
    ans += count / k;
    if(ans >= m)
        return ans ;

    return ans;
}

// int MinimumBoloomDay(vector<int>arr,int m,int k){
//     int low = *min_element(arr.begin(), arr.end());
//     int high = *max_element(arr.begin(), arr.end());
//     int n = arr.size();
//     // base case 
//     if(n < m*k){
//         return -1;
//     }
//     for (int i = low; i <= high; i++){
//         if(FindTheDay(arr,i,m,k)){
//             return i;
//         }
            
//     }
//     return -1;
// }


int MinimumBoloomDayBinarySearch(vector<int> arr, int m , int k){
    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());
    int n = arr.size();
    if (n < m * k) {
        return -1;
    }
    int ans = -1;
    while(low<= high){
        int mid = (low + high) / 2;
        int isDayValid = FindTheDay(arr, mid, m, k);
        if(isDayValid >= m){
            ans = mid;
            high = mid - 1;
        }else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<tuple<vector<int>, int, int>> testCases = {
        {{1, 10, 3, 10, 2}, 3, 1}, // Expected: 3
        {{1, 10, 3, 10, 2}, 3, 2}, // Expected: -1
        {{7, 7, 7, 7, 12, 7, 7}, 2, 3}, // Expected: 12
        {{1000000000, 1000000000}, 1, 1}, // Expected: 1000000000
        {{1, 10, 2, 9, 3, 8}, 2, 2} // Expected: 9
    };

    for (int i = 0; i < testCases.size(); i++) {
        auto [arr, m, k] = testCases[i];
        int result = MinimumBoloomDayBinarySearch(arr, m, k);
        cout << "Test Case " << i + 1 << ": Minimum day to make " << m << " bouquets (k=" << k << ") -> " << result << endl;
    }

    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

int FindTheDay(vector<int> arr,int day ,int m , int k){
    int count = 0;
    int ans = 0;

    for (int i = 0; i < arr.size(); i++){
        if(arr[i] <= day){
            count++;

        }else{
            ans += count / k;
            count = 0;
        }
    }
    ans += count / k;
    if(ans >= m)
        return ans ;

    return ans;
}

// int MinimumBoloomDay(vector<int>arr,int m,int k){
//     int low = *min_element(arr.begin(), arr.end());
//     int high = *max_element(arr.begin(), arr.end());
//     int n = arr.size();
//     // base case 
//     if(n < m*k){
//         return -1;
//     }
//     for (int i = low; i <= high; i++){
//         if(FindTheDay(arr,i,m,k)){
//             return i;
//         }
            
//     }
//     return -1;
// }


int MinimumBoloomDayBinarySearch(vector<int> arr, int m , int k){
    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());
    int n = arr.size();
    if (n < m * k) {
        return -1;
    }
    int ans = -1;
    while(low<= high){
        int mid = (low + high) / 2;
        int isDayValid = FindTheDay(arr, mid, m, k);
        if(isDayValid >= m){
            ans = mid;
            high = mid - 1;
        }else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<tuple<vector<int>, int, int>> testCases = {
        {{1, 10, 3, 10, 2}, 3, 1}, // Expected: 3
        {{1, 10, 3, 10, 2}, 3, 2}, // Expected: -1
        {{7, 7, 7, 7, 12, 7, 7}, 2, 3}, // Expected: 12
        {{1000000000, 1000000000}, 1, 1}, // Expected: 1000000000
        {{1, 10, 2, 9, 3, 8}, 2, 2} // Expected: 9
    };

    for (int i = 0; i < testCases.size(); i++) {
        auto [arr, m, k] = testCases[i];
        int result = MinimumBoloomDayBinarySearch(arr, m, k);
        cout << "Test Case " << i + 1 << ": Minimum day to make " << m << " bouquets (k=" << k << ") -> " << result << endl;
    }

    return 0;
>>>>>>> 3ffe28cfedf2733f8d30d5c7eedde94246a74e32
}