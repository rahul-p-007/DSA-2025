#include<bits/stdc++.h>
using namespace std;

vector<int> UnionElement(vector<int> arr,vector<int> brr){
    set<int> unionSet;
    for(int  num : arr )
    {
        unionSet.insert(num);
    }
    for(int num : brr){
        unionSet.insert(num);
    }
    vector<int> result(unionSet.begin(), unionSet.end());
    return result;
}
int main() {
    vector<int> arr1 = {1, 2, 4, 5, 6};
    vector<int> arr2 = {2, 3, 5, 7};

    vector<int> unionResult = UnionElement(arr1, arr2);

    cout << "Union of arr1 and arr2: ";
    for (int num : unionResult) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
