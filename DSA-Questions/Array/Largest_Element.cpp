#include<bits/stdc++.h>
using namespace std;

// Brute force
int LargestElement(vector<int>arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}

// Optimal
int LargestElementOpt(vector<int>arr){
    int maxEle = arr[0];
    for (int i = 0; i < arr.size();i++){
        if(arr[i] > maxEle){
            maxEle = arr[i];
        }
    }
    return maxEle;
}


int main() {
    vector<vector<int>> testCases = {
        {1, 3, 2, 5, 4},
        {10, 20, 5, 25, 15},
        {-1, -5, -3, -4, -2},
        {100},
        {7, 7, 7, 7, 7}
    };

    for (int i = 0; i < testCases.size(); i++) {
        cout << "Test Case " << i + 1 << ":\n";
        cout << "Array: ";
        for (auto num : testCases[i]) {
            cout << num << " ";
        }
        cout << "\n";

        cout << "Largest Element (Brute Force): " << LargestElement(testCases[i]) << "\n";
        cout << "Largest Element (Optimal): " << LargestElementOpt(testCases[i]) << "\n";
        cout << "--------------------------------------\n";
    }

    return 0;
}