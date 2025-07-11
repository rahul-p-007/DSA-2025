<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
// Brute Force

/*
1. Inserting one element into a set takes O(log n) time (because it maintains sorted order internally).

2. You insert n elements, so total time = O(n log n).

3. You are creating a new set → taking O(n) extra space.


*/ 
set<int> RemoveDuplicateinSortedArray(vector<int> arr){
    
    set<int> ans;
    for(int num : arr){
        ans.insert(num);
    }
    return ans;
}
// Optimal solution

int RemoveDuplicateinSortedArrayOpt(vector<int>& arr) {
    int i = 0;
    for (int j = 1; j < arr.size(); j++) { 
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}


int main() {
    vector<vector<int>> testCases = {
        {1, 1, 2, 2, 3, 3, 4, 5},       // Duplicate values
        {10, 20, 30, 40, 50},           // No duplicates
        {5, 5, 5, 5, 5},                // All elements same
        {1},                            // Single element
        {},                             // Empty array
        {1, 2, 2, 3, 3, 4, 5, 5, 6}     // Mixed
    };

    for (int t = 0; t < testCases.size(); t++) {
        cout << "Test Case " << t + 1 << ":\n";

        // Brute Force
        set<int> resultBrute = RemoveDuplicateinSortedArray(testCases[t]);
        cout << "Brute Force (set): ";
        for (auto num : resultBrute) {
            cout << num << " ";
        }
        cout << "\n";

        // Optimal
        vector<int> arrOpt = testCases[t]; // Copy because optimal modifies array
        int newSize = RemoveDuplicateinSortedArrayOpt(arrOpt);
        cout << "Optimal (Modified Array): ";
        for (int i = 0; i < newSize; i++) {
            cout << arrOpt[i] << " ";
        }
        cout << "\n";

        cout << "-----------------------------\n";
    }

    return 0;
=======
#include<bits/stdc++.h>
using namespace std;
// Brute Force

/*
1. Inserting one element into a set takes O(log n) time (because it maintains sorted order internally).

2. You insert n elements, so total time = O(n log n).

3. You are creating a new set → taking O(n) extra space.


*/ 
set<int> RemoveDuplicateinSortedArray(vector<int> arr){
    
    set<int> ans;
    for(int num : arr){
        ans.insert(num);
    }
    return ans;
}
// Optimal solution

int RemoveDuplicateinSortedArrayOpt(vector<int>& arr) {
    int i = 0;
    for (int j = 1; j < arr.size(); j++) { 
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}


int main() {
    vector<vector<int>> testCases = {
        {1, 1, 2, 2, 3, 3, 4, 5},       // Duplicate values
        {10, 20, 30, 40, 50},           // No duplicates
        {5, 5, 5, 5, 5},                // All elements same
        {1},                            // Single element
        {},                             // Empty array
        {1, 2, 2, 3, 3, 4, 5, 5, 6}     // Mixed
    };

    for (int t = 0; t < testCases.size(); t++) {
        cout << "Test Case " << t + 1 << ":\n";

        // Brute Force
        set<int> resultBrute = RemoveDuplicateinSortedArray(testCases[t]);
        cout << "Brute Force (set): ";
        for (auto num : resultBrute) {
            cout << num << " ";
        }
        cout << "\n";

        // Optimal
        vector<int> arrOpt = testCases[t]; // Copy because optimal modifies array
        int newSize = RemoveDuplicateinSortedArrayOpt(arrOpt);
        cout << "Optimal (Modified Array): ";
        for (int i = 0; i < newSize; i++) {
            cout << arrOpt[i] << " ";
        }
        cout << "\n";

        cout << "-----------------------------\n";
    }

    return 0;
>>>>>>> 3ffe28cfedf2733f8d30d5c7eedde94246a74e32
}