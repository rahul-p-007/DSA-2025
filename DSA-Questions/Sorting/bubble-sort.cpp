#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> &arr){
    int n = arr.size();
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++ ){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
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
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    cout << "Original Array: ";
    PrintArray(arr);

    bubblesort(arr);

    cout << "Sorted Array: ";
    PrintArray(arr);

    return 0;
}