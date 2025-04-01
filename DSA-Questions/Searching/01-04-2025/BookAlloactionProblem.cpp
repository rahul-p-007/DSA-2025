#include<bits/stdc++.h>
using namespace std;

int CountStudent(vector<int>arr,int MaxPages){
    int students = 1;
    long long PagesStudent = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if(PagesStudent + arr[i] <= MaxPages){
            PagesStudent += arr[i];
        }else{
            students++;
            PagesStudent = arr[i];
        }
    }
    return students;
}

int BookAllocationProblem(vector<int>arr,int m,int n){
    // Impossible condition
    if(m > n)
        return -1;
    int ans = -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while(low<= high){
        int mid = low + (high - low) / 2;
        int StudentCount = CountStudent(arr, mid);
        if(StudentCount > m ){
            low = mid + 1;
        }else{
            ans = mid;
            high = mid - 1;
            
        }
    }
    return ans;
}
#include <bits/stdc++.h>
using namespace std;

void runTestCases() {
    vector<vector<int>> testCases = {
        {12, 34, 67, 90},      // Test Case 1
        {5, 10, 20, 30, 40},   // Test Case 2
        {10, 20, 30, 40},      // Test Case 3
        {15, 20, 30},          // Test Case 4 (Impossible)
        {10, 20, 30, 40, 50, 60, 70, 80, 90, 100} // Test Case 5 (Large)
    };

    vector<int> students = {2, 1, 4, 4, 5}; // Corresponding student counts

    for (int i = 0; i < testCases.size(); i++) {
        int n = testCases[i].size();
        int m = students[i];
        int result = BookAllocationProblem(testCases[i], m, n);
        cout << "Test Case " << i + 1 << ": " << result << endl;
    }
}

int main() {
    runTestCases();
    return 0;
}
