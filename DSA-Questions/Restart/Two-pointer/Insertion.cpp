#include<bits/stdc++.h>
using namespace std;

vector<int> insertionElement(vector<int>arr, vector<int>brr){
    vector<int> Inst;
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < brr.size(); j++){
            if(arr[i] == brr[j]){
                brr[j] = -1;
                Inst.push_back(arr[i]);
                break;
            }
        }
    }
    return Inst;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4};
    vector<int> brr = {2, 2, 3, 5};

    vector<int> result = insertionElement(arr, brr);

    cout << "Intersection: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

