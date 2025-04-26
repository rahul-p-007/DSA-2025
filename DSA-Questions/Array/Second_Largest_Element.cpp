#include<bits/stdc++.h>
using namespace std;

// Brute force
int SecondLargestEle(vector<int>arr){
    sort(arr.begin(), arr.end());
    int largestEle = arr[arr.size() - 1];
    int secondLargestEle = -1;
    for (int i = arr.size() - 2; i >= 0; i--){
        if(largestEle != arr[i]){
            secondLargestEle = arr[i];
            break;
        }
    }
    return secondLargestEle;
}
// Better 
int SecondLargestEleBtt(vector<int> arr){
    int largestEle = INT_MIN;
    for (int i = 0; i < arr.size();i++){
        if(arr[i] > largestEle){
            largestEle = arr[i];
        }
    }
    int secondLargsetEle = INT_MIN;
    for (int i = 0; i < arr.size();i++){
        if(arr[i] > secondLargsetEle && arr[i] != largestEle){
            secondLargsetEle = arr[i];
        }
    }
    return secondLargsetEle;
}

// Optimal
int SecondLargestOpt(vector<int> arr){
    int largestEle = arr[0];
    int slargestEle = INT_MIN;
    for (int i = 0; i < arr.size(); i++){
        if(arr[i] > largestEle){
            slargestEle = largestEle;
            largestEle = arr[i];
        }else if(arr[i] < largestEle && arr[i] > slargestEle){
            slargestEle = arr[i];
        }
    }
    return slargestEle;
}
int secondSmallestEelement(vector<int> arr)
{
    int smallestEle = arr[0];
    int sSmallestEle= INT_MAX;
    for (int i = 0; i < arr.size(); i++){
        if(arr[i] < smallestEle){
            sSmallestEle = smallestEle;
            smallestEle = arr[i];
        }
        else if(arr[i] != smallestEle && arr[i] < sSmallestEle){
            sSmallestEle = arr[i];
        }
    }
    return sSmallestEle;
}

int main() {
    vector<vector<int>> testCases = {
        {1, 2, 3, 4, 5},
        {5, 5, 5, 5},
        {10, 20, 10, 30, 20},
        {-1, -2, -3, -4, -5},
        {100}
    };

    for (int i = 0; i < testCases.size(); i++) {
        cout << "Test Case " << i + 1 << ":\n";
        cout << "Array: ";
        for (auto num : testCases[i]) {
            cout << num << " ";
        }
        cout << "\n";

        cout << "Second Largest (Brute Force): " << SecondLargestEle(testCases[i]) << "\n";
        cout << "Second Largest (Better): " << SecondLargestEleBtt(testCases[i]) << "\n";
        cout << "Second Largest (Optimal): " << SecondLargestOpt(testCases[i]) << "\n";
        cout << "Second Smallest: " << secondSmallestEelement(testCases[i]) << "\n";
        cout << "--------------------------------------\n";
    }

    return 0;
}