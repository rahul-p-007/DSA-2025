#include<bits/stdc++.h>
using namespace std;

bool findSumUsingTwoPointer(vector<int>& arr, int target){
    sort(arr.begin(), arr.end());
    int start = 0;
    int end = arr.size() - 1;
    int sum = 0;
    while(start <= end){
        sum = arr[start] + arr[end];
        if(sum == target){
            return true;
        }else if(sum < target){
            start++;
        }else{
            end--;
        }
    }
    return false;
}

int main() {
    vector<pair<vector<int>, int>> testCases = {
        {{10, 2, 8, 4, 6}, 12},
        {{1, 3, 5, 7, 9}, 10},
        {{4, 6, 1, 2, 10}, 17},
        {{0, -1, 2, -3, 1}, -2},
        {{100, 200, 300, 400, 500}, 700}
    };

    for (int i = 0; i < testCases.size(); i++) {
        vector<int> arr = testCases[i].first;
        int target = testCases[i].second;

        cout << "Test Case " << i + 1 << ": ";
        if (findSumUsingTwoPointer(arr, target)) {
            cout << "Pair found for target " << target << "\n";
        } else {
            cout << "Pair not found for target " << target << "\n";
        }
    }

    return 0;
}


