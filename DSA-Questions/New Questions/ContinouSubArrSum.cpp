#include<bits/stdc++.h>
using namespace std;

bool continuousSumOfArray(vector<int> arr, int k) {
    unordered_map<int, int> m;
    m[0] = -1;  // Base case: for subarrays starting from index 0

    int sum = 0;

    for (int j = 0; j < arr.size(); j++) {
        sum += arr[j];
        int mod = k == 0 ? sum : sum % k;

        if (m.find(mod) != m.end()) {
            if (j - m[mod] >= 2) {
                return true;
            }
        } else {
            // Store only the first occurrence
            m[mod] = j;
        }
    }

    return false;
}


int main() {
    int size;
    cin >> size;
    return 0;
}