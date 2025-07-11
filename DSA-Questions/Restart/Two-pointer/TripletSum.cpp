#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> TripletSum(vector<int> arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;
    for (int i = 0; i < n - 2; i++){
        if(i> 0 && arr[i] == arr[i-1]){
            continue;
        }

        int start = i + 1;
        int end = n - 1;

        while(start <end){
            int sum = arr[start] + arr[end] + arr[i];
            if(sum == 0){
                result.push_back({arr[i], arr[start], arr[end]});
                while(start < end && arr[start] == arr[start + 1])
                start++;
                while(start < end && arr[end] == arr[end - 1])
                    end--;

                start++;
                end--;
            }else if(sum < 0){
                start++;
            }else{
                end--;
            }

        }

    }
    return result;
}

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> triplets = TripletSum(arr);

    cout << "Triplets with sum = 0:\n";
    for (const auto& triplet : triplets) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}


