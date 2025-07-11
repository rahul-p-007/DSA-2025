#include<bits/stdc++.h>
using namespace std;
int FindRoot(int n, int m,int mid){
    long long ans = 1;
    for (int i = 1; i <= n; i++){
        ans = ans * mid;
        if(ans > m)
            return 2;
    }
    if(ans == m)
        return 1;

    return 0;
}

int NthRoot(int n,int m){
    int start = 0;
    int end = m;
    while(start <= end){
        int mid = start + (end - start) / 2;
        int midN = FindRoot(n, m,mid);
        if(midN == 1){
            return mid;
        }else if(midN == 0){
            start = mid + 1;
        }else {
            end = mid - 1;
        }
        
    }
    return -1;
}

int main() {
    vector<tuple<int, int>> tests = {
        {2, 16},    // 4^2 = 16
        {3, 27},    // 3^3 = 27
        {4, 81},    // 3^4 = 81
        {2, 10},    // √10 = not perfect
        {3, 28},    // 3rd root of 28 is not perfect
        {5, 243},   // 3^5 = 243
        {1, 99},    // 99^1 = 99
        {10, 1024}, // 2^10 = 1024
    };

    for (auto [n, m] : tests) {
        cout << "NthRoot(" << n << ", " << m << ") = " << NthRoot(n, m) << endl;
    }

    return 0;
}
