#include <bits/stdc++.h>
using namespace std;

// Brute force approach to find all pairs with given sum
vector<pair<int, int>> PairSum(vector<int> arr, int target) {
    vector<pair<int, int>> Ans;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                Ans.push_back({arr[i], arr[j]});
            }
        }
    }
    return Ans;
}
vector<pair<int, int>>PairSum2(vector<int> arr,int target){
    vector<pair<int, int>> Ans;
    sort(arr.begin(), arr.end());
    int start = 0;
    int end = arr.size() - 1;
    while(start < end){

        int sum = arr[start] + arr[end];
        if(sum == target){
            Ans.push_back({arr[start], arr[end]});
            start++;
            end--;
        }
       else if(sum > target){
            end--;
        }else{
            start++;
        }
    }
    return Ans;
}
int main() {
    vector<int> arr = {2, 7, 11, 15, -2, 4, 8};
    int target = 9;

    vector<pair<int, int>> result = PairSum2(arr, target);

    for (auto p : result) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    return 0;
}
