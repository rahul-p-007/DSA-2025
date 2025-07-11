<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

// Brute Force
vector<int> RotateArraywithKposition(vector<int> arr, int k) {
    int n = arr.size();
    // Handle the case when k is greater than n
    k = k % n;  // Reduces unnecessary rotations
    int temp[k];  // Temporary array to store the first k elements
    
    // Store the first k elements in temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the front
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Copy the first k elements from temp to the end of arr
    int j = 0;
    for (int i = n - k; i < n; i++) {
        arr[i] = temp[j++];
    }

    return arr;
}
// Optimal Solution
void RotateArraywithKpositionOpt(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return; // handle empty array

    k = k % n; // if k > n

    // Step 1: Reverse first k elements
    reverse(arr.begin(), arr.begin() + k);

    // Step 2: Reverse remaining n-k elements
    reverse(arr.begin() + k, arr.end());

    // Step 3: Reverse the whole array
    reverse(arr.begin(), arr.end());
}

int main() {
    // Brute Force test cases
    cout << "Brute Force Approach:" << endl;
    
    vector<int> arr1 = {1, 2, 3, 4, 5};
    int k1 = 2;
    vector<int> result1 = RotateArraywithKposition(arr1, k1);
    cout << "Test Case 1: ";
    for (int num : result1) cout << num << " ";
    cout << endl;

    vector<int> arr2 = {10, 20, 30, 40, 50};
    int k2 = 3;
    vector<int> result2 = RotateArraywithKposition(arr2, k2);
    cout << "Test Case 2: ";
    for (int num : result2) cout << num << " ";
    cout << endl;

    vector<int> arr3 = {5, 6, 7, 8};
    int k3 = 1;
    vector<int> result3 = RotateArraywithKposition(arr3, k3);
    cout << "Test Case 3: ";
    for (int num : result3) cout << num << " ";
    cout << endl;

    vector<int> arr4 = {1, 1, 1, 1};
    int k4 = 4;
    vector<int> result4 = RotateArraywithKposition(arr4, k4);
    cout << "Test Case 4: ";
    for (int num : result4) cout << num << " ";
    cout << endl;

    cout << endl;

    // Optimal Approach test cases
    cout << "Optimal Approach:" << endl;

    vector<int> arr5 = {1, 2, 3, 4, 5};
    int k5 = 2;
    RotateArraywithKpositionOpt(arr5, k5);
    cout << "Test Case 1: ";
    for (int num : arr5) cout << num << " ";
    cout << endl;

    vector<int> arr6 = {10, 20, 30, 40, 50};
    int k6 = 3;
    RotateArraywithKpositionOpt(arr6, k6);
    cout << "Test Case 2: ";
    for (int num : arr6) cout << num << " ";
    cout << endl;

    vector<int> arr7 = {5, 6, 7, 8};
    int k7 = 1;
    RotateArraywithKpositionOpt(arr7, k7);
    cout << "Test Case 3: ";
    for (int num : arr7) cout << num << " ";
    cout << endl;

    vector<int> arr8 = {1, 1, 1, 1};
    int k8 = 4;
    RotateArraywithKpositionOpt(arr8, k8);
    cout << "Test Case 4: ";
    for (int num : arr8) cout << num << " ";
    cout << endl;

    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

// Brute Force
vector<int> RotateArraywithKposition(vector<int> arr, int k) {
    int n = arr.size();
    // Handle the case when k is greater than n
    k = k % n;  // Reduces unnecessary rotations
    int temp[k];  // Temporary array to store the first k elements
    
    // Store the first k elements in temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the front
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Copy the first k elements from temp to the end of arr
    int j = 0;
    for (int i = n - k; i < n; i++) {
        arr[i] = temp[j++];
    }

    return arr;
}
// Optimal Solution
void RotateArraywithKpositionOpt(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return; // handle empty array

    k = k % n; // if k > n

    // Step 1: Reverse first k elements
    reverse(arr.begin(), arr.begin() + k);

    // Step 2: Reverse remaining n-k elements
    reverse(arr.begin() + k, arr.end());

    // Step 3: Reverse the whole array
    reverse(arr.begin(), arr.end());
}

int main() {
    // Brute Force test cases
    cout << "Brute Force Approach:" << endl;
    
    vector<int> arr1 = {1, 2, 3, 4, 5};
    int k1 = 2;
    vector<int> result1 = RotateArraywithKposition(arr1, k1);
    cout << "Test Case 1: ";
    for (int num : result1) cout << num << " ";
    cout << endl;

    vector<int> arr2 = {10, 20, 30, 40, 50};
    int k2 = 3;
    vector<int> result2 = RotateArraywithKposition(arr2, k2);
    cout << "Test Case 2: ";
    for (int num : result2) cout << num << " ";
    cout << endl;

    vector<int> arr3 = {5, 6, 7, 8};
    int k3 = 1;
    vector<int> result3 = RotateArraywithKposition(arr3, k3);
    cout << "Test Case 3: ";
    for (int num : result3) cout << num << " ";
    cout << endl;

    vector<int> arr4 = {1, 1, 1, 1};
    int k4 = 4;
    vector<int> result4 = RotateArraywithKposition(arr4, k4);
    cout << "Test Case 4: ";
    for (int num : result4) cout << num << " ";
    cout << endl;

    cout << endl;

    // Optimal Approach test cases
    cout << "Optimal Approach:" << endl;

    vector<int> arr5 = {1, 2, 3, 4, 5};
    int k5 = 2;
    RotateArraywithKpositionOpt(arr5, k5);
    cout << "Test Case 1: ";
    for (int num : arr5) cout << num << " ";
    cout << endl;

    vector<int> arr6 = {10, 20, 30, 40, 50};
    int k6 = 3;
    RotateArraywithKpositionOpt(arr6, k6);
    cout << "Test Case 2: ";
    for (int num : arr6) cout << num << " ";
    cout << endl;

    vector<int> arr7 = {5, 6, 7, 8};
    int k7 = 1;
    RotateArraywithKpositionOpt(arr7, k7);
    cout << "Test Case 3: ";
    for (int num : arr7) cout << num << " ";
    cout << endl;

    vector<int> arr8 = {1, 1, 1, 1};
    int k8 = 4;
    RotateArraywithKpositionOpt(arr8, k8);
    cout << "Test Case 4: ";
    for (int num : arr8) cout << num << " ";
    cout << endl;

    return 0;
>>>>>>> 3ffe28cfedf2733f8d30d5c7eedde94246a74e32
}