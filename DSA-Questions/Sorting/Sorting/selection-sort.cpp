#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr){
    int n = arr.size() ;
    for (int i = 0; i < n-1; i++){
        int mini = i;
        for (int j = i + 1; j < n; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
          }
}

void PrintArray(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    vector<int> arr = {64, 25, 12, 22, 11};

    cout << "Before sorting: ";
    PrintArray(arr);

    selectionSort(arr); 

    cout << "After sorting: ";
    PrintArray(arr); 

    return 0;
}